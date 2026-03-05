#include <arpa/inet.h>
#include <cstring>
#include <fstream>
#include <iostream>
#include <thread>
#include <unistd.h>

using namespace std;

void sendFile(int sock, const string &filename) {
    ifstream in(filename, ios::binary);
    if (!in) {
        cerr << "Cannot open " << filename << endl;
        return;
    }

    in.seekg(0, ios::end);
    long size = in.tellg();
    in.seekg(0);

    send(sock, &size, sizeof(size), 0);

    char buffer[1024];
    while (in.read(buffer, sizeof(buffer)))
        send(sock, buffer, sizeof(buffer), 0);

    send(sock, buffer, in.gcount(), 0);

    cout << "Sent file\n";
}

void receiveFile(int sock, const string &filename) {
    long size;
    recv(sock, &size, sizeof(size), 0);

    ofstream out(filename, ios::binary | ios::trunc);

    char buffer[1024];
    long received = 0;

    while (received < size) {
        int bytes = recv(sock, buffer, sizeof(buffer), 0);
        out.write(buffer, bytes);
        received += bytes;
    }

    cout << "Received file\n";
}

int main() {
    int sock = socket(AF_INET, SOCK_STREAM, 0);

    sockaddr_in addr{};
    addr.sin_family = AF_INET;
    addr.sin_port = htons(8080);
    inet_pton(AF_INET, "127.0.0.1", &addr.sin_addr);

    connect(sock, (sockaddr *)&addr, sizeof(addr));
    cout << "Connected to server!\n";

    thread receiver([&]() {
        while (true)
            receiveFile(sock, "client.txt");
    });

    while (true) {
        int x;
        cin >> x;
        if (x == 1)
            sendFile(sock, "client.txt");
    }

    receiver.join();
    close(sock);
}

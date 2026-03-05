#include <arpa/inet.h>
#include <cstring>
#include <iostream>
#include <unistd.h>

using namespace std;

int main() {
  int sock;
  sockaddr_in server_addr{};
  char buffer[1024] = {0};

  // 1. Create socket
  sock = socket(AF_INET, SOCK_STREAM, 0);
  if (sock < 0) {
    perror("socket");
    return 1;
  }

  // 2. Server address
  server_addr.sin_family = AF_INET;
  server_addr.sin_port = htons(8080);

  // Replace with SERVER LAN IP
  inet_pton(AF_INET, "172.20.166.86", &server_addr.sin_addr);

  // 3. Connect
  if (connect(sock, (sockaddr *)&server_addr, sizeof(server_addr)) < 0) {
    perror("connect");
    return 1;
  }

  // 4. Read data
  read(sock, buffer, sizeof(buffer));
  cout << "Received: " << buffer << endl;

  close(sock);
  return 0;
}

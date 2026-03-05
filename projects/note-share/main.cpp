#include <chrono>
#include <fstream>
#include <iostream>
#include <thread>

using namespace std;

void copyFile(const string &src, const string &dst) {
    ifstream in(src);
    ofstream out(dst, ios::trunc);

    if (!in.is_open() || !out.is_open()) {
        cerr << "File open error\n";
        return;
    }

    out << in.rdbuf();
}

int main() {
    const string fileA = "fileA.txt";
    const string fileB = "fileB.txt";

    while (true) {
        copyFile(fileA, fileB); // A → B
        copyFile(fileB, fileA); // B → A

        cout << "Synced both files\n";
        this_thread::sleep_for(chrono::seconds(2));
    }
}

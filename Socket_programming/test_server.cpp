#include <arpa/inet.h>
#include <cstring>
#include <iostream>
#include <unistd.h>

using namespace std;

int main() {
  int server_fd, client_fd;
  sockaddr_in server_addr{}, client_addr{};
  socklen_t client_len = sizeof(client_addr);

  // 1. Create socket
  server_fd = socket(AF_INET, SOCK_STREAM, 0);
  if (server_fd < 0) {
    perror("socket");
    return 1;
  }

  // 2. Bind address + port
  server_addr.sin_family = AF_INET;
  server_addr.sin_port = htons(8080);
  server_addr.sin_addr.s_addr = INADDR_ANY; // LAN accessible

  if (bind(server_fd, (sockaddr *)&server_addr, sizeof(server_addr)) < 0) {
    perror("bind");
    return 1;
  }

  // 3. Listen
  listen(server_fd, 5);
  cout << "Server listening on port 8080...\n";

  // 4. Accept client
  client_fd = accept(server_fd, (sockaddr *)&client_addr, &client_len);
  if (client_fd < 0) {
    perror("accept");
    return 1;
  }

  cout << "Client connected\n";

  // 5. Send data
  const char *msg = "Hello from C++ server over LAN!\n";
  send(client_fd, msg, strlen(msg), 0);

  close(client_fd);
  close(server_fd);
  return 0;
}

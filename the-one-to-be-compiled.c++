#include <iostream>
#include <csignal>

std::string input;

void signal(int) {
  std::cout << "\nI only accept SIGKILL and SIGSTOP\nType something...> ";
}

int main() {
  signal(SIGINT, signal);
  signal(SIGHUP, signal);
  signal(SIGTERM, signal);
}

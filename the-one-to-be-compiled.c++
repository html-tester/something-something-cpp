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
  /* todo test if git-blame-someone-else works */
  /* todo make more program plseaes */
}

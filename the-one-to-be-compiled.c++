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
  while(true) {
    std::cout << "Type something...> ";
    std::cin >> input;
    std::cout << "You typed " << input << std::endl;
  }
  /* todo havent tested the progrmamn, maybe we shoudl soon */
}

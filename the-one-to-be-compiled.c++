#include <iostream>
#include <csignal>

std::string input;

void signal(int) {
  std::cout << "\nI only accept SIGKILL and SIGSTOP\nType something...> ";
}

/* todo make int main */

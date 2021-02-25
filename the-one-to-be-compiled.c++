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
  GotoLabel: {}
  std::cout << "Type something...> ";
  std::cin >> input;
  goto GotoLabel; // todo while(true) is much better
  /* todo havent tested the progrmamn, maybe we shoudl soon */
  /* todo make mowe pwogwam uwu */
  /* todo fix ticket 2441 (double personality disorder) */
}

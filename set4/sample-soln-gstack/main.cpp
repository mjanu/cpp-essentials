#include "gstack.h"
#include <iostream>

int main() {
  MyStack<int> s1(10);
  s1.push(11);
  s1.push(22);
  s1.push(33);
  std::cout << s1.peek() << "\n";
  std::cout << s1.pop() << "\n";

  return 0;
}

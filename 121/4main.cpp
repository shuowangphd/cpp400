#include <iostream>
int main() {
  int x = 2;
  std::cout << x << std::endl;
  std::cout <<"&x: " << &x << std::endl;
  int *p = &x;
  std::cout << " p: " <<  p << std::endl;
  std::cout << "&p: " << &p << std::endl;
  std::cout << "*p: " << *p << std::endl;
  *p = 3;
  std::cout << x << std::endl;
  return 0;
}
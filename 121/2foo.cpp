#include <iostream>
void foo() {
  int x = 2;
  std::cout<< x << " " << &x << std::endl;
}
int main() {
  int x = 3;
  std::cout <<  x << " " << &x << std::endl;
  foo();
  return 0;
}
#include <iostream>

int f = 1;
int r = 2;

int questionMarkExample(){

  f == r ? std::cout << "f is equal to r" : std::cout << "f is not equal to r";

  return 0;
}

int main() {
  questionMarkExample();
  return 0;
}

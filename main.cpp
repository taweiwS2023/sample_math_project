#include <iostream>
#include "Multiplier/functions.h"

int main() {

  int num1 = 3;
  int num2 = 4;
  int result = multiplier::Multiply(num1, num2);
  std::cout << num1 << " * " << num2 << " = " << result << std::endl;
  return 0;
}
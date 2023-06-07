#include "Adder/functions.h"
#include "Multiplier/functions.h"

namespace multiplier {
int Multiply(int a, int b) {
  int product = 0;
  for (int i = 0; i < b; i++) {
	product = Adder::add(product, a);
  }
  return product;
}
}

#include "Multiplier/multiplier.h"
#include "Adder/adder.h"

namespace Multiplier {
    int multiply(int a, int b) {
        int product = 0;
        for(int i = 0; i < b; i++) {
            product = Adder::add(product, a);
        }
        return product;
    }
}
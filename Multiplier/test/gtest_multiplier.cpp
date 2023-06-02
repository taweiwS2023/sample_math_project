#include "gtest/gtest.h"
#include "Multiplier/multiplier.h"

TEST(MultiplierTest, HandlesZeroInput) {
  EXPECT_EQ(0, Multiplier::multiply(2, 0));
}

TEST(MultiplierTest, HandlesPositiveInput) {
  EXPECT_EQ(6, Multiplier::multiply(2, 3));
}
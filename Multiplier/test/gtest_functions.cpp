#include "gtest/gtest.h"
#include "Multiplier/functions.h"

TEST(MultiplierTest, HandlesZeroInput) {
  EXPECT_EQ(0, multiplier::Multiply(2, 0));
}

TEST(MultiplierTest, HandlesPositiveInput) {
  EXPECT_EQ(6, multiplier::Multiply(2, 3));
}
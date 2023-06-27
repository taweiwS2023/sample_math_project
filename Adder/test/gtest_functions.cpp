#include "gtest/gtest.h"
#include "Adder/functions.h"

TEST(AdderTest, HandlesZeroInput)
{
    EXPECT_EQ(0, Adder::add(0, 0));
}

TEST(AdderTest, HandlesPositiveInput)
{
    EXPECT_EQ(6, Adder::add(2, 4));
}

TEST(AdderTest, HandlesNegativeInput)
{
EXPECT_EQ(-12, Adder::add(-3, -9));
}
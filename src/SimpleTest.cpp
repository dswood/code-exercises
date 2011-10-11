#include "gtest/gtest.h"

double mySqrt(double value);

TEST(SomeTest, DoesThis) {
  ASSERT_EQ(1,1);
}

TEST(Tutorial, Sqrt) {
  ASSERT_EQ(2, mySqrt(4));
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

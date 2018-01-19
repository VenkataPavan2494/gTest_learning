#include "01_add_function.cpp"

#include <gtest/gtest.h>

TEST(add_number_Test, PositiveNumbers) {
  ASSERT_EQ(25, add_number(12, 13));
}

TEST(add_number_Test, NegativeNumbers) {
  ASSERT_EQ(-25, add_number(-12, -13));
}

int main(int argc, char ** argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

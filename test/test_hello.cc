#include "hello.hpp"
#include <gtest/gtest.h>

TEST(add, AddPostive) {
  EXPECT_EQ(3, add(1, 2));
}

TEST(add, AddNegative) {
  EXPECT_EQ(-30, add(-10, -20));
}

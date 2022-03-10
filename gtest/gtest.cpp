#include <gtest/gtest.h>
#include <vector>

TEST(Vector, Constructor) {
  std::vector<int> v;
  EXPECT_EQ(v.size(), 0);
  EXPECT_EQ(v.size(), 1);
}
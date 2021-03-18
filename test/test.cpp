#include "gtest/gtest.h"
#include <vector>
#include "leet.h"
#include "N0011/solution.h"

TEST(TestSuiteName, TestName) {
    EXPECT_EQ(1, 1);
}

TEST(N0011, MostWater)
{
    N0011::Solution solution;
    vector<int> vec{4,3,2,1,4};
    int max = solution.maxArea(vec);
    EXPECT_EQ(max, 16);
}
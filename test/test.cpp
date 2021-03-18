#include "gtest/gtest.h"
#include <vector>
#include "leet.h"
#include "N0011/solution.h"
#include "N0002/solution.h"

TEST(N0011, MostWater)
{
    N0011::Solution solution;
    vector<int> vec{4,3,2,1,4};
    int max = solution.maxArea(vec);
    EXPECT_EQ(max, 16);
}

TEST(N0002, ADD)
{
    ListNode node3(3, nullptr);
    ListNode node2(4, &node3);
    ListNode node1(2, &node2);

    ListNode node6(4, nullptr);
    ListNode node5(6, &node6);
    ListNode node4(5, &node5);
    N0002::Solution solution;
    ListNode* res = solution.addTwoNumbers(&node1, &node4);
    EXPECT_EQ(res->val, 7);
    EXPECT_EQ(res->next->val, 0);
    EXPECT_EQ(res->next->next->val, 8);

}
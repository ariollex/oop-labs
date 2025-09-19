#include <gtest/gtest.h>
#include "../include/split_chocolate.hpp"

// Tests for is_valid_data function
TEST(is_valid_data_test, normal_test)
{
    ASSERT_TRUE(is_valid_data(2,1));
    ASSERT_TRUE(is_valid_data(3,1));
    ASSERT_TRUE(is_valid_data(8,3));
}

TEST(is_valid_data_test, first_param_broken)
{
    ASSERT_FALSE(split_chocolate(0,3));
    ASSERT_FALSE(split_chocolate(-5,4));
}

TEST(is_valid_data_test, second_param_broken)
{
    ASSERT_FALSE(split_chocolate(3,0));
    ASSERT_FALSE(split_chocolate(4,-5));
}

TEST(is_valid_data_test, all_params_broken)
{
    ASSERT_FALSE(split_chocolate(0,0));
    ASSERT_FALSE(split_chocolate(-3,-3));
    ASSERT_FALSE(split_chocolate(0,-5));
    ASSERT_FALSE(split_chocolate(-5,-0));
    ASSERT_FALSE(split_chocolate(-0,-0));
}

// Tests for split_chocolate function
TEST(split_chocolate_test, normal_test)
{
    ASSERT_TRUE(split_chocolate(2,1)==1);
    ASSERT_TRUE(split_chocolate(3,1)==2);
    ASSERT_TRUE(split_chocolate(8,3)==9);
}

TEST(split_chocolate_test, first_param_broken)
{
    ASSERT_TRUE(split_chocolate(0,3)==0);
    ASSERT_TRUE(split_chocolate(-5,4)==0);
}

TEST(split_chocolate_test, second_param_broken)
{
    ASSERT_TRUE(split_chocolate(3,0)==0);
    ASSERT_TRUE(split_chocolate(4,-5)==0);
}

TEST(split_chocolate_test, all_params_broken)
{
    ASSERT_TRUE(split_chocolate(0,0)==0);
    ASSERT_TRUE(split_chocolate(-3,-3)==0);
    ASSERT_TRUE(split_chocolate(0,-5)==0);
    ASSERT_TRUE(split_chocolate(-5,-0)==0);
    ASSERT_TRUE(split_chocolate(-0,-0)==0);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

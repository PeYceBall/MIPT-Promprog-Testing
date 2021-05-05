//
// Created by akhtyamovpavel on 5/1/20.
//

#include "LeapTestCase.h"

#include <Functions.h>


#include "LeapTestCase.h"

#include <Functions.h>

TEST(LeapTestCase, MultipleOf400) {
  EXPECT_TRUE(IsLeap(400));
  EXPECT_TRUE(IsLeap(800));
}

TEST(LeapTestCase, MultipleOf100NotMultipleOf100) {
  EXPECT_FALSE(IsLeap(300));
  EXPECT_FALSE(IsLeap(500));
}

TEST(LeapTestCase, MultipleOf4NotMultipleOf100) {
  EXPECT_TRUE(IsLeap(16));
  EXPECT_TRUE(IsLeap(20));
}

TEST(LeapTestCase, NotMultipleOf4) {
  EXPECT_FALSE(IsLeap(5));
  EXPECT_FALSE(IsLeap(6));
}

TEST(LeapTestCase, GreaterThanZero) {
  EXPECT_THROW(IsLeap(0), std::invalid_argument);
  EXPECT_THROW(IsLeap(-1), std::invalid_argument);
}

TEST(LeapTestCase, FebruaryDays) {
  EXPECT_EQ(GetMonthDays(16, 2), 29);
  EXPECT_EQ(GetMonthDays(17, 2), 28);
}

TEST(LeapTestCase, InvalidMonth){
  EXPECT_THROW(GetMonthDays(1, -1), std::invalid_argument);
  EXPECT_THROW(GetMonthDays(1, 13), std::invalid_argument);
}

TEST(LeapTestCase, OtherMonths){
  EXPECT_EQ(GetMonthDays(1, 4), 30);
  EXPECT_EQ(GetMonthDays(1, 6), 30);
  EXPECT_EQ(GetMonthDays(1, 9), 30);
  EXPECT_EQ(GetMonthDays(1, 11), 30);

  EXPECT_EQ(GetMonthDays(1, 3), 31);
  EXPECT_EQ(GetMonthDays(1, 5), 31);
  EXPECT_EQ(GetMonthDays(1, 7), 31);
  EXPECT_EQ(GetMonthDays(1, 8), 31);
  EXPECT_EQ(GetMonthDays(1, 10), 31);
  EXPECT_EQ(GetMonthDays(1, 12), 31);
}
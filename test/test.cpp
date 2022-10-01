/**
 * @file test.cpp
 * @author Driver: Joseph Pranadeer Reddy Katakam (jkatak73@umd.edu)
 * @author Navigator: Adithya Gaurav Singh (agsingh@umd.edu)
 * @brief Unit Testing for the PID Controller Class
 * @version 0.1
 * @date 2022-09-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#pragma once
#include <cmath>
#include <gtest/gtest.h>
#include <math.h>
#include "../include/PidController.hpp"

// Test case for known input, known output
TEST(compute, test_case_1) {
  PidController controller_object;
  EXPECT_NEAR(controller_object.compute(5.00, 3.00), 2.0, 0.0001);
}

// Test case for check for infinity
TEST(compute, test_case_2) {
  PidController controller_object(1, 0, 0, 0);
  EXPECT_EQ(std::isnan(controller_object.compute(5.00, 3.00)), true);
}

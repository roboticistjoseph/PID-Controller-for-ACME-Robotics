/**
 * @file PidController.cpp
 * @author Driver: Joseph Pranadeer Reddy Katakam (jkatak73@umd.edu)
 * @author Navigator: Adithya Gaurav Singh (agsingh@umd.edu)
 * @brief Class implementation for PidController
 * @version 0.1
 * @date 2022-09-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#pragma once
#include <iostream>
#include "../include/PidController.hpp"

PidController::PidController() {
            k_p_ = 1;
            k_i_ = 0;
            k_d_ = 0;
            d_t_ = 0.1;
            curr_error_ = 0;
            prev_error_ = 0;
            integral_error_ = 0;
        }

PidController::PidController(double proportional_constant,
    double integration_constant, double derivative_constant,
    double time_interval) {
            k_p_ = proportional_constant;
            k_i_ = integration_constant;
            k_d_ = derivative_constant;
            d_t_ = time_interval;
            curr_error_ = 0;
            prev_error_ = 0;
            integral_error_ = 0;
        }

double PidController::compute(double target_velocity, double current_velocity) {
    current_velocity = target_velocity - current_velocity;
    integral_error_ += current_velocity * d_t_;
    static double currOutput;
    currOutput = k_p_*current_velocity + k_i_*integral_error_ + k_d_
                    * (current_velocity - prev_error_) / d_t_;
    integral_error_ += curr_error_ * d_t_;
    return currOutput;
        }

PidController::~PidController() {
}

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
#include "PidController.hpp"

PidController::PidController() {
            k_p = 1;
            k_i = 0;
            k_d = 0;
            d_t = 0.1;
        }

PidController::PidController(double proportional_constant, double integration_constant, double derivative_constant, double time_interval) {
            k_p = proportional_constant;
            k_i = integration_constant;
            k_d = derivative_constant;
            d_t = time_interval;
        }

double PidController::compute(double target_velocity, double current_velocity) {
            return 100.0;
        }

PidController::~PidController() {

}
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
            k_p = 1;
            k_i = 0;
            k_d = 0;
            d_t = 0.1;
            currError = 0;
            prevError = 0;
            integralError = 0;
        }

PidController::PidController(double proportional_constant,
    double integration_constant, double derivative_constant,
    double time_interval) {
            k_p = proportional_constant;
            k_i = integration_constant;
            k_d = derivative_constant;
            d_t = time_interval;
            currError = 0;
            prevError = 0;
            integralError = 0;
        }

double PidController::compute(double target_velocity, double current_velocity) {
    currError = target_velocity - current_velocity;
    integralError += currError * d_t;
    static double currOutput;
    currOutput = k_p*currError + k_i*integralError + k_d
                    * (currError - prevError) / d_t;
    integralError += currError * d_t;
    return currOutput;
        }

PidController::~PidController() {
}

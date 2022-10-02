/**
 * @file PidController.hpp
 * @author Driver: Joseph Pranadeer Reddy Katakam (jkatak73@umd.edu)
 * @author Navigator: Adithya Gaurav Singh (agsingh@umd.edu)
 * @brief Class declaration for PidController
 * @version 0.1
 * @date 2022-09-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#pragma once
#include <iostream>

/**
 * @brief Class for PID Controller
 * 
 */
class PidController {
 private:
        /**
         * @brief Proportional Gain
         * 
         */
        double k_p_;

        /**
         * @brief Integral Gain
         * 
         */
        double k_i_;

        /**
         * @brief Derivative Gain
         * 
         */
        double k_d_;

        /**
         * @brief Time Interval
         * 
         */
        double d_t_;

        /**
         * @brief Stores the current error
         * 
         */
        double curr_error_;

        /**
         * @brief Stores the error at the previous time step
         * 
         */
        double prev_error_;

        /**
         * @brief Stores the accumulation of error over time
         * 
         */
        double integral_error_;

 public:
        /**
        * @brief Default Constructor for Pid Controller Class
        * 
        */
        PidController();

        /**
         * @brief Custom Constructor for Pid Controller Class
         * 
         * @param proportional_constant 
         * @param integration_constant 
         * @param derivative_constant 
         * @param time_interval 
         */
        PidController(double proportional_constant, double integration_constant,
        double derivative_constant, double time_interval);

        /**
         * @brief Compute PID controller output
         * 
         * @param target_velocity 
         * @param current_velocity 
         * @return double 
         */
        double compute(double target_velocity, double current_velocity);

        /**
         * @brief Destructor for Pid Controller Class
         * 
         */
        ~PidController();
};

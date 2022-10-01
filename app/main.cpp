/**
 * @file main.cpp
 * @author Driver: Joseph Pranadeer Reddy Katakam (jkatak73@umd.edu)
 * @author Navigator: Adithya Gaurav Singh (agsingh@umd.edu)
 * @brief Main function for the PID Controller
 * @version 0.1
 * @date 2022-09-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#pragma once
#include <iostream>
#include "../include/PidController.hpp"

int main() {
    std::cout << "Enter the Desired Velocity: ";

    // Reading the user input for Target Velocity
    double target_velocity;
    std::cin >> target_velocity;
    std::cout << std::endl;

    PidController controller_object;

    // Defining default velocity for current velocity
    double current_velocity = 100;

    // Display the computed PID Class output
    std::cout << std::endl << "Computed PID Controller Output: "
    << controller_object.compute(target_velocity, current_velocity);

    return 0;
}

// Copyright (c) 2019 Amirmahdi Mersad All rights reserved
//
// Created by Amir Mersad
// Created on September 2019
// This program checks if the entered number is the same as random number

#include <iostream>

int main() {
    // This function checks if the entered number is the same as random number
    std::string year_str;
    int year;

    // Input
    std::cout << "Please enter the year: " << std::endl;
    std::cin >> year_str;

    // Process & Output
    try {
        year = std::stoi(year_str);
        if (year % 4 == 0) {
            if (year % 100 != 0) {
                std::cout << year << " is definitely a leap year!" << std::endl;
            } else if (year % 100 == 0 && year % 400 == 0) {
                std::cout << year << " is definitely a leap year!" << std::endl;
            } else {
                std::cout << year << " is not a leap year :(" << std::endl;
            }
        } else {
            std::cout << year << " is not a leap year :(" << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "Wrong input!!!" << std::endl;
    }
}

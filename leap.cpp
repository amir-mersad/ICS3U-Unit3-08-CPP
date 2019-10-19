// Copyright (c) 2019 Amirmahdi Mersad All rights reserved
//
// Created by Amir Mersad
// Created on September 2019
// This program checks if the entered number is the same as random number

#include <iostream>

int main() {
    // This function checks if the entered number is the same as random number
    std::string age_str;
    int age;

    // Input
    std::cout << "Please enter you age: " << std::endl;
    std::cin >> age_str;

    // Process & Output
    try {
        age = std::stoi(age_str);
        if (age > 25 && age < 40) {
            std::cout << "You are accepted to date the girl and do other stuff"
            << std::endl;
        } else if (age < 25) {
            std::cout << "You are young, come back later when you are older"
            << std::endl;
        } else {
            std::cout << "You are too old!" << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "Wrong input!!!";
    }
}

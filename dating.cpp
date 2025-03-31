// Copyright (c) 2025 Jack Turcotte All rights reserved.
//
// Created by: Jack Turcotte
// Date: March 19, 2025
// Dating age range response program

#include <iostream>
#include <string>

int main() {
    std::string userAgeString = "";
    int userAgeInt;


    try {
        userAgeInt = std::stoi(userAgeString);
        if (userAgeInt <= 40 && userAgeInt >= 20) {
            std::cout << "You are old enough to date our granddaughter";
        } else if (userAgeInt < 20) {
            std::cout << "You are too young to date our granddaughter";
        } else {
            std::cout << "You are too old to date our granddaughter";
        }
    } catch (std::invalid_argument) {
        std::cout << "Please make sure to enter a number, not a string!"
        << "You entered " << userAgeString;
        main();
    }
    std::cout << "Thanks for playing!";
}

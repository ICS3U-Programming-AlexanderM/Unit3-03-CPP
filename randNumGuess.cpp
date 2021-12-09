// Copyright (c) 2021 Alexander Matheson All rights reserved.
//
// Created by: Alexander matheson
// Created on: Dec 8 2021
// This program gets the user to guess a number
// between 0 and 9 and tells them if it is correct.
#include <iostream>
#include <random>


int main() {
    // this function checks the user's number
    float userNumber;
    int correct;

    std::random_device rseed;

    std::mt19937 rgen(rseed());

    std::uniform_int_distribution<int> idist(0, 9);

    correct = idist(rgen);

    // input
    std::cout << "What is your number? ";
    std::cin >> userNumber;
    std::cout << "" << std::endl;

    // process
    if (userNumber == correct) {
        // output
        std::cout << "Correct!";
    } else if (userNumber >= 10) {
        // output
        std::cout << "Number must be between 0 and 9.";
    } else if (userNumber <= -1) {
        // output
        std::cout << "Number must be between 0 and 9.";
    }  else {
        // output
        std::cout << "Wrong, the number was " << correct << ".";
    }
}

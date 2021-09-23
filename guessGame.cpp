// Copyright (c) 2021 D.B. Calitis All rights reserved
//
// Created by: Daria Bernice Calitis
// Created on: Sept 2021
// This program is a number guessing game

#include <iostream>
#include <random>
#include <string>


int main() {
    // This function checks if your guess is correct
    int answer;
    int guessNumber;
    std::string guessNumberString;

    std::random_device rseed;
    std::mt19937 rgen(rseed());  // mersenne_twister
    std::uniform_int_distribution<int> idist(0, 9);  // [0,9]

    answer = idist(rgen);

    // input
    std::cout << "Enter a number as your guess (0-9): ";
    std::cin >> guessNumberString;

    try {
        guessNumber = std::stoi(guessNumberString);
        // process & output
        if (guessNumber == answer) {
            std::cout << "You guessed correctly!" << std::endl;
        } else {
            std::cout << "You guessed incorrectly." << std::endl;
        }
        std::cout << "The correct answer is " << answer << "." << std::endl;
    } catch(std::invalid_argument) {
        std::cout << "Invalid Input." << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}

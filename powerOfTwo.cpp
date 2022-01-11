// Copyright (c) 2021 Ketia Gaelle Kaze All rights reserved.
//
// Created by: Ketia Gaelle Kaze
// Created on: Jan. 10, 2022
// This program asks the user to enter a whole number
// and then uses the loop to calculate and display the
// square of all numbers from 0 to the user number.
# include <iostream>
# include<cmath>

int main() {
    // initialize the loop counter and power of two
    int loopCounter = 0;
    int powerOfTwo = 0;
    int userNum;
    std::string userNumString;

    // get the user number as string
    std::cout << "Enter a whole number: ";
    std::cin >> userNumString;
    std::cout << std::endl;

    try {
        // convert the user number as string to an integer
        userNum = std::stoi(userNumString);
        std::cout << "" << std::endl;

        // checks if the user number is a whole number
        if (userNum >=0) {
            // calculate the square of all numbers from 0 to user number
            for (loopCounter = 0; loopCounter <= userNum; loopCounter++) {
                powerOfTwo = pow(loopCounter, 2);
                std::cout <<userNum <<"^2 = " <<powerOfTwo<< std::endl;
            }
        } else {
            std::cout << userNum << " is not a positive number.";
            std::cout << "" << std::endl;
            std::cout << "Thanks for playing. ";
    }
    // tells the user that they did not enter a number
    } catch (std::invalid_argument) {
        std::cout <<userNumString << " is not a number.\n";
        std::cout << "" << std::endl;
        std::cout << "Thanks for playing. ";
    }
}

// Copyright (c) 2020 Ahmad El-khawaldeh All rights reserved.
//
// Created by: Ahmad El-khawaldeh
// Created on: DEC 2020
// This program calculates the area of tringle

#include <iostream>

void area_tringle(float length, float height) {
        float area;
        area = 0.5 * length * height;
        // output
        std::cout << "The area of the tringle is " << (area)
        << " cm2 " << std::endl;
}

int main() {
// this function just calls other functions
        float length;
        float height;
        std::string length_string;
        std::string height_string;

        // input
        std::cout << "Enter base length: ";
        std::cin >> length_string;
        std::cout << "Enter height: ";
        std::cin >> height_string;
        try {
                length = stof(length_string);
                height = stof(height_string);

                // call functions
                area_tringle(length, height);
        }
        catch (std::invalid_argument) {
                std::cout << "That was not a valid integer" << std::endl;
        }
}

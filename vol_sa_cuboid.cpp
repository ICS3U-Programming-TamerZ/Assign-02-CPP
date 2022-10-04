// Copyright (c) 2022 Tamer Zreg All rights reserved.
//
// Created by: Tamer Zreg
// Date: Oct 3, 2022
// This program asks the user for the length width and height of a
// cuboid and then displays the surface area and volume of a
// cuboid with the given variables.
#include <iostream>

int main() {
    // declare variables
    float length, width, height, surfacearea, volume;

    // get the length, width and height from the user
    std::cout << "Enter the length (mm): ";
    std::cin >> length;
    std::cout << "Enter the width (mm): ";
    std::cin >> width;
    std::cout << "Enter the height (mm): ";
    std::cin >> height;

    // calculate the volume and surface area
    surfacearea = 2*(length * width) + 2*(length * height) + 2*(width * height);
    volume = width * length * height;

    // display the volume and surface area to the user
    std::cout << "\n";
    std::cout << "Surface Area = " << surfacearea << " mm^2" << std::endl;
    std::cout << "\n";
    std::cout << "Volume = " << volume << " mm^3" << std::endl;
}

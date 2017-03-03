//
// Created by Ron Pearl on 3/3/17.
//
// Using only pointers (no array indexing), write:
//
//  1. A function to add all numbers in an integer array.
//  2. A function to remove all odd numbers from an ordered array. The array
//     should remain ordered. Would it be easier to write this function if the array
//     were unordered?
//
#include <iostream>
#ifndef WEEK1_PROBLEM_1_11_4_PART2_H
#define WEEK1_PROBLEM_1_11_4_PART2_H


class Problem_1_11_4_part2 {
private:
    // Setup ordered array and pointer
    int myArray[8] = {4, 5, 6, 7, 8, 9, 10, 11};
    int *pointer;

    void removeOdd() {
        // Store address of array into pointer
        pointer = myArray;

        // Loop through the number of items in array
        for (int i = 0; i < 8; i++) {
            if (pointer[i] % 2 != 0) {
                std::cout << pointer[i] << std::endl;
            }
        }
    };

public:
    int printEvenNums() {
        removeOdd();
    }
};


#endif //WEEK1_PROBLEM_1_11_4_PART2_H

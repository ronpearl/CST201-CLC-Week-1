//
// Created by Ron Pearl on 3/2/17.
//
// Using only pointers (no array indexing), write:
//
//  1. A function to add all numbers in an integer array.
//  2. A function to remove all odd numbers from an ordered array. The array
//     should remain ordered. Would it be easier to write this function if the array
//     were unordered?
//

#ifndef WEEK1_PROBLEM_1_11_4_H
#define WEEK1_PROBLEM_1_11_4_H


class Problem_1_11_4_part1 {
private:
    // Setup array, total value, and pointer
    int myArray[6] = {5, 8, 6, 4, 10, 1};
    int total = 0;
    int *p;


    void doCalcs() {
            // Store address of array into pointer
            p = myArray;

            // Loop through the number of items in array
            for (int i = 0; i < 6; i++) {
                total = total + *p;     // Using pointer position, add to the total
                p++;                    // Increment pointer position
            }
    };

public:
    int getTotal() {
        doCalcs();
        return total;
    }
};


#endif //WEEK1_PROBLEM_1_11_4_H

//
// Created by Ron Pearl on 3/2/17.
//

#ifndef WEEK1_PROBLEM_1_11_4_H
#define WEEK1_PROBLEM_1_11_4_H


class Problem_1_11_4 {
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

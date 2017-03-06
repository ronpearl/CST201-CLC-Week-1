#include <iostream>
//#include "Week 1/Problem_1_11_4.h"
//#include "Week 1/Problem_1_11_4_part2.h"

#include "Week2/IntSLLNode.h"

using namespace std;

int main() {

//    Problem_1_11_4_part1* p1114 = new Problem_1_11_4_part1();
//    std::cout << p1114->getTotal() << std::endl;
//
//    Problem_1_11_4_part2* p1114_2 = new Problem_1_11_4_part2();
//    p1114_2->printEvenNums();

    IntSLLNode *node = new IntSLLNode(5);
    node->next = new IntSLLNode(10);
    node->next->next = new IntSLLNode(50);

    // Read all nodes in the linked list
    while (node != NULL) {
        cout << node->info << endl;
        node = node->next;
    }

    cout << node->info << endl;

    return 0;
}


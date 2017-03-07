#include <iostream>

#include "Week2/MyNumbers.h"

using namespace std;

int main() {

    MyNumbers *node = new MyNumbers();

    node = node->insertAtBeginning(node, 5);
    node = node->insertAtBeginning(node, 8);
    node = node->insertAtBeginning(node, 22);
    node = node->insertAtBeginning(node, 12);

    node->printNums(node);


    // TODO: https://www.youtube.com/watch?v=IbvsNF22Ud0&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=7


    return 0;
}


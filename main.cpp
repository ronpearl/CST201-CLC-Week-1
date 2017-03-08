#include <iostream>

#include "Week2/MyNumbers.h"

using namespace std;

int main() {

    MyNumbers *linkedList = new MyNumbers();

    linkedList = linkedList->insertAtBeginning(linkedList, 5); // List: 5
    linkedList = linkedList->insertAtBeginning(linkedList, 8); // List: 8, 5
    linkedList = linkedList->insertAtBeginning(linkedList, 22); // List: 22, 8, 5
    linkedList = linkedList->insertAtBeginning(linkedList, 12); // List: 12, 22, 8, 5

//    cout << "\nList after beginning inserts:" << endl;
//    linkedList->printNums(linkedList);


    linkedList = linkedList->insertAtPosition(linkedList, 2, 1);  // List: 2, 12, 22, 8, 5
    linkedList = linkedList->insertAtPosition(linkedList, 10, 4);  // List: 2, 12, 22, 10, 8, 5

//    cout << "\nList after position inserts:" << endl;
//    linkedList->printNums(linkedList);

    linkedList = linkedList->removeAtPosition(linkedList, 3);   // List: 2, 12, 10, 8, 5

    cout << "\nList after position removal:" << endl;
    linkedList->printNums(linkedList);



    // TODO: https://www.youtube.com/watch?v=IbvsNF22Ud0&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P


    return 0;
}


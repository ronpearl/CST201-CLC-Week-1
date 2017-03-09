#include <iostream>

#include "Week2/LinkedList.h"

using namespace std;

int main() {

    LinkedList *list1 = new LinkedList();
    LinkedList *list2 = new LinkedList();

    list1->addToEnd(5);
    list1->addToEnd(2);
    list1->print();

    list2->addToEnd(20);
    list2->addToEnd(36);
    list2->print();

    list1->insertAtBeginning(10);
    list1->print();

    list2->insertAtBeginning(8);
    list2->print();

    list2->removeAtPosition(1);
    list2->print();

    list2->insertAtPosition(18, 3);
    list2->print();


    // Append lists
//    cout << "\nAppending lists: " << endl;
//    list1->appendLists(list2->head);

    // TODO: https://www.youtube.com/watch?v=IbvsNF22Ud0&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P


    return 0;
}


//
// Created by Ron Pearl on 3/7/17.
//
#include <iostream>

#ifndef WEEK1_MYNUMBERS_H
#define WEEK1_MYNUMBERS_H

using namespace std;

class MyNumbers {

public:
    int data;
    MyNumbers *next;
    MyNumbers *head;

    MyNumbers() {
        head = NULL;
    }

    /**
     * Inserting number at beginning of list
     *
     * @param node
     * @param num
     * @return
     */
    MyNumbers* insertAtBeginning(MyNumbers *node, int num) {
        MyNumbers *temp = new MyNumbers();
        temp->data = num;
        temp->next = NULL;

        if (node != NULL) {
            temp->next = node;
        }

        return temp;
    }

    void printNums(MyNumbers *node) {
        MyNumbers *temp = node;

        cout << "\nList: " << endl;

        while (temp != NULL) {
            cout << temp->data << endl;
            temp = temp->next;
        }
    }

//    void removeNum(int pos) {
//        struct Node *temp1 = head;
//    }

};

#endif //WEEK1_MYNUMBERS_H

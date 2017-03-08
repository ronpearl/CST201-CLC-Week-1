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

    /**
     * Insert a number at a specific position
     *
     * @param node
     * @param val
     * @param pos
     * @return
     */
    MyNumbers* insertAtPosition(MyNumbers *node, int val, int pos) {
        MyNumbers *temp1 = new MyNumbers();
        temp1->data = val;
        temp1->next = NULL;

        if (pos == 1) {
            temp1->next = node;
            return temp1;
        }

        MyNumbers *temp3 = new MyNumbers();     // Build new node
        temp3->data = val;
        temp3->next = NULL;

        MyNumbers *curr = new MyNumbers();
        MyNumbers *prev = new MyNumbers();

        curr = node;                            // Assign curr to head

        // Iterate through positions to find new node position
        for (int i = 1; i < pos; i++) {
            prev = curr;
            curr = curr->next;
        }

        prev->next = temp3;     // Add new node to prev (which puts it into the correct position)
        temp3->next = curr;     // Add next position of curr to temp3

        return node;
    }

    /**
     * Remove a node at a specific position
     *
     * @param node
     * @param pos
     * @return
     */
    MyNumbers* removeAtPosition(MyNumbers *node, int pos) {
        MyNumbers *temp1 = node;

        // removing first node
        if (pos == 1) {
            node = temp1->next;     // Assign head to 2nd node
            free(temp1);            // Delete first node

            return node;
        }

        // Move pointer to the position we need to remove
        for (int i = 0; i < pos-2; i++) {
            temp1 = temp1->next;
        }

        MyNumbers *temp2 = temp1->next;     // Assign temp2 to the node we will remove
        temp1->next = temp2->next;          // Assign node after the position we are going to remove

        free(temp2);                // Free up memory allocation for
    }

    /**
     * Prints out the linked list data
     *
     * @param node
     */
    void printNums(MyNumbers *node) {
        MyNumbers *temp = node;

        while (temp != NULL) {
            cout << temp->data << endl;
            temp = temp->next;
        }
    }

};

#endif //WEEK1_MYNUMBERS_H

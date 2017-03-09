//
// Created by Ron Pearl on 3/9/17.
//
#include <iostream>

#ifndef WEEK1_LINKEDLIST_H
#define WEEK1_LINKEDLIST_H

using namespace std;

class LinkedList {
public:
    int data;
    LinkedList *next;
    LinkedList *head;

    LinkedList() {
        head = NULL;
    }

    /**
     * Add item to end of list
     *
     * @param val
     */
    void addToEnd(int val) {
        LinkedList *temp = new LinkedList();
        temp->data = val;
        temp->next = NULL;

        LinkedList *temp2 = head;

        if (temp2 == NULL) {
            head = temp;
            return;
        }

        // Get to the end of the list
        while (temp2->next != NULL) {
            temp2 = temp2->next;
        }

        // Do the append
        temp2->next = temp;
    }

    /**
     * Insert data at the beginning of the list
     *
     * @param val
     */
    void insertAtBeginning(int val) {
        LinkedList *temp = new LinkedList();
        temp->data = val;
        temp->next = NULL;

        if (head != NULL) {
            temp->next = head;
        }

        head = temp;
    }

    /**
     * Remove a node at a specific position
     *
     * @param pos
     */
    void removeAtPosition(int pos) {
        LinkedList *temp1 = head;

        // removing first node
        if (pos == 1) {
            head = temp1->next;     // Assign head to 2nd node
            free(temp1);            // Delete first node

            return;
        }

        // Move pointer to the position we need to remove
        for (int i = 0; i < pos-2; i++) {
            temp1 = temp1->next;
        }

        LinkedList *temp2 = temp1->next;     // Assign temp2 to the node we will remove
        temp1->next = temp2->next;          // Assign node after the position we are going to remove

        free(temp2);                // Free up memory allocation for
    }

    /**
     * Insert a number at a specific position
     *
     * @param val
     * @param pos
     */
    void insertAtPosition(int val, int pos) {
        LinkedList *temp1 = new LinkedList();
        temp1->data = val;
        temp1->next = NULL;

        if (pos == 1) {
            temp1->next = head;
            head = temp1;
            return;
        }

        LinkedList *curr = new LinkedList();
        LinkedList *prev = new LinkedList();

        curr = head;                            // Assign curr to head

        // Iterate through positions to find new node position
        for (int i = 1; i < pos; i++) {
            prev = curr;
            curr = curr->next;
        }

        prev->next = temp1;     // Add new node to prev (which puts it into the correct position)
        temp1->next = curr;     // Add next position of curr to temp3
    }

//    void appendLists(LinkedList *toAppend) {
//        LinkedList *thisList = head;
//        LinkedList *newList = toAppend;
//
//        // Get to the last element of our current list
//        while (thisList != NULL) {
//            thisList = thisList->next;
//        }
//
//        while (newList->next != NULL) {
//            thisList = newList;
//            thisList->next = NULL;
//
//            newList = newList->next;
//        }
//
//        head = thisList;
//    }

    /**
     * Print out items in the list
     */
    void print() {
        LinkedList *temp = head;

        // Check if empty
        if (temp == NULL) {
            cout << "Empty" << endl;
            return;
        }

        while (temp != NULL) {
            cout << temp->data;
            cout << ", ";
            temp = temp->next;
        }

        cout << "NULL" << endl;
    }
};


#endif //WEEK1_LINKEDLIST_H

//
// Created by Ron Pearl on 3/6/17.
//

#ifndef WEEK1_INTYSLLNODE_H
#define WEEK1_INTYSLLNODE_H


class IntSLLNode {
public:
    int info;
    IntSLLNode *next;

    IntSLLNode() {
        next = 0;
    }
    IntSLLNode(int i, IntSLLNode *in = 0) {
        info = i;
        next = in;
    }
};


#endif //WEEK1_INTYSLLNODE_H

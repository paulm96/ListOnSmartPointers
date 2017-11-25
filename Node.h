//
// Created by pawel on 25.11.17.
//

#ifndef LIST_NODE_H
#define LIST_NODE_H


class Node {
public:
    int getElement() const;

    void setElement(int element);

    Node *getNext() const;

    void setNext(Node *next);

private:
    int element;
    Node *next;

};


#endif //LIST_NODE_H

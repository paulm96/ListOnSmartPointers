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

    Node(int element, Node *next);

    virtual ~Node();

private:
    int element;
    Node *next = nullptr;

};


#endif //LIST_NODE_H

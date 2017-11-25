//
// Created by pawel on 25.11.17.
//


#ifndef LIST_NODE_H
#define LIST_NODE_H


#include <memory>

class Node {
public:
    int getElement() const;

    void setElement(int element);

    Node(int element, std::unique_ptr<Node> next);

    virtual ~Node();

private:
    int element;
    std::unique_ptr<Node> next;

};


#endif //LIST_NODE_H

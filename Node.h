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

    void setNext(std::unique_ptr<Node> &&next);

    Node(int element, std::unique_ptr<Node>&& next);  //constructor

    virtual ~Node();    //destructor

private:
    int element;
    std::unique_ptr<Node> next;

};


#endif //LIST_NODE_H

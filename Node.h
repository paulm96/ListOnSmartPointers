//
// Created by pawel on 25.11.17.
//


#ifndef LIST_NODE_H
#define LIST_NODE_H


#include <memory>

template <typename T>
class Node {
public:
    T getElement() const;

    void setElement(T element);

    void setNext(std::unique_ptr<Node<T>> &&next);

    std::unique_ptr<Node<T>>& getNext();

    Node(T element, std::unique_ptr<Node<T>>&& next);  //constructor

    virtual ~Node();    //destructor

private:
    T element;
    std::unique_ptr<Node<T>> next;

};


#endif //LIST_NODE_H

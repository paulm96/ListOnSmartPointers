//
// Created by pawel on 25.11.17.
//

#include <iostream>
#include "Node.h"

int Node::getElement() const {
    return element;
}

void Node::setElement(int element) {
    Node::element = element;
}

Node *Node::getNext() const {
    return next;
}

void Node::setNext(Node *next) {
    Node::next = next;
}

Node::Node(int element, Node *next) : element(element), next(next) {
    std::cout << "I create a Node";
}

Node::~Node() {
    std::cout << " I start deleting Node";
    delete next;
    std::cout << "Node is deleted";
}

//
// Created by pawel on 25.11.17.
//

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

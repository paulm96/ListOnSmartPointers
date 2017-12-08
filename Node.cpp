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

Node::Node(int element, std::unique_ptr<Node>&& next) : element(element), next(std::move(next)) {
    std::cout << "I create a Node with the element " << element << std::endl;
}

Node::~Node() {
    std::cout << "I start deleting Node " << element << std::endl;
    std::cout << "Node is deleted\n";
}

void Node::setNext(std::unique_ptr<Node> &&next) {
    Node::next = std::move(next);
}

std::unique_ptr<Node>& Node::getNext() {
    return next;
}


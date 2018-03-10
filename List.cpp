//
// Created by pawel on 25.11.17.
//
#include <iostream>
#include "List.h"

List::List() : head(nullptr) {
    std::cout << "I create a List\n";
}

List::~List() {
    std::cout << "I start deleting the List\n";
    std::cout << "List is deleted\n";
}

void List::push_back(const int &&element) {
    auto ptrNode = std::make_unique<Node>(element, nullptr); //new Node
    if (nullptr == head) {
        head = std::move(ptrNode);  //new Node is moved to head, from now ptrNode points to 0
        return;
    }
    ptrNode->setNext(std::move(head));
    head = std::move(ptrNode);
}

void List::pop_back() {
    head = std::move((*head).getNext());
    std::cout << "I popped_back the Node, now the head is ";
    std::cout << (*head).getElement() << std::endl;
}


bool List::empty() const {
    if(head) {
        return false;
    }
    return true;
}

List::iterator::iterator(Node *_ptr) : ptr(_ptr) {}

List::iterator List::begin() {
    List::iterator it(head.get());
    return it;
}


List::iterator List::end() {
    List::iterator it(nullptr);
    return it;
}

//
// Created by pawel on 25.11.17.
//

#include <iostream>
#include "List.h"

Node *List::getHead() const {
    return head;
}

void List::setHead(Node *head) {
    List::head = head;
}

List::List(Node *head) : head(head) {
    std::cout << "I create a List";
}

List::~List() {
    std::cout << "I start deleting the List";
    delete head;
    std::cout << "List is deleted";
}

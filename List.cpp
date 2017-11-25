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

List::List() : {
    std::cout << "I create a List\n";
}

List::~List() {
    std::cout << "I start deleting the List\n";
    delete head;
    std::cout << "List is deleted\n";
}

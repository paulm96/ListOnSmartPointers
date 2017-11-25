//
// Created by pawel on 25.11.17.
//

#include "List.h"

Node *List::getHead() const {
    return head;
}

void List::setHead(Node *head) {
    List::head = head;
}

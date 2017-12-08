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
    head = std::move(head.get()->getNext());
    std::cout << "I popped_back the Node, now the head is ";
    std::cout << head.get()->getElement() << std::endl;
}

void List::foreach(void (*func)(int)) const {         //here make the universal call for function func() operating on tmp->getElement() argument instead on ptr to void function
    std::cout << std::endl << "Foreach:\n" ;
    auto tmp = head.get();
    while(nullptr != tmp) {
        std::cout << (tmp->getElement()) << std::endl;
        tmp = tmp->getNext().get();
    }
}





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

void List::push_back(const int &&element){
    auto ptrNode = std::make_unique<Node>(element, nullptr); //new Node
    //std::unique_ptr<Node> ptrNode(new Node(element, nullptr));  //the one above is better cuz it doesn't require using 'new'
    if(nullptr == head){
        head = std::move(ptrNode);  //new Node is moved to head, from now ptrNode points to 0
    }
}


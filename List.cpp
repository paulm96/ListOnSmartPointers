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

//void List::foreach(void (*func)(int)) const {         //here make the universal call for function func() operating on tmp->getElement() argument instead on ptr to void function
//    std::cout << std::endl << "Foreach:\n" ;        //foreach should be out-class function, it should depends on iterators
//    auto tmp = head.get();                          //for_each (list.begin(), list.end(), ptr_to_fctn) //http://www.cplusplus.com/reference/algorithm/for_each/
//    while(nullptr != tmp) {
//        //std::cout << (tmp->getElement()) << std::endl;
//        func(tmp->getElement());
//        tmp = tmp->getNext().get();
//    }
//}

bool List::empty() const {
    if(nullptr == head) {
        return false;
    }
    return true;
}

List::iterator List::begin() {
    it.setPtr(head.get());
    return it;
}

List::iterator List::end() {
    auto tmp = head.get();
    while(nullptr != tmp) {
        tmp = tmp->getNext().get();
    }
    it.setPtr(tmp);
    return it;
}





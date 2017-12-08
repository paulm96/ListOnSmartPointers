//
// Created by pawel on 25.11.17.
//

#include <iostream>
#include "Node.h"

template <typename T>
T Node<T>::getElement() const {
    return element;
}

template <typename T>
void Node<T>::setElement(T element) {
    Node<T>::element = element;
}

template <typename T>
Node<T>::Node(T element, std::unique_ptr<Node<T>>&& next) : element(element), next(std::move(next)) {
    std::cout << "I create a Node with the element " << element << std::endl;
}

template <typename T>
Node<T>::~Node() {
    std::cout << "I start deleting Node " << element << std::endl;
    std::cout << "Node is deleted\n";
}

template <typename T>
void Node<T>::setNext(std::unique_ptr<Node<T>> &&next) {
    Node<T>::next = std::move(next);
}

template <typename T>
std::unique_ptr<Node<T>>& Node<T>::getNext() {
    return next;
}


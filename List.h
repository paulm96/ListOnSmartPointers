//
// Created by pawel on 25.11.17.
//



#ifndef LIST_LIST_H
#define LIST_LIST_H

#include "List.cpp"
#include "Node.h"

template <typename T>
class List {
public:
    struct iterator{
    public:
        const T operator*() const {
            return iterator::ptr->getElement();
        }

        void operator++(){
            iterator::ptr = iterator::ptr->getNext().get();
        }

        bool operator!=(List<T>::iterator a) const {
            return (a.getPtr() != iterator::ptr);
        }

        Node<T> *getPtr() const {
            return iterator::ptr;
        }

        void setPtr(Node<T> *ptr) {
            iterator::ptr = ptr;
        }

    private:
        Node<T>* ptr;
    };

    List() : head(nullptr) {};

    virtual ~List() {std::cout <<"I deleted the List";};

    iterator begin();

    iterator end();

    void push_back(const T &&element);

    void pop_back();

    void foreach(void (*func)(int)) const;   //foreach can be used instead of iterator, foreach is more universal and shorter to write

    bool empty() const;
private:
    std::unique_ptr<Node<T>> head;
    List<T>::iterator it;

};


#endif //LIST_LIST_H

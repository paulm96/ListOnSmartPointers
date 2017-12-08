//
// Created by pawel on 25.11.17.
//



#ifndef LIST_LIST_H
#define LIST_LIST_H

#include "Node.h"

class List {
public:
    struct iterator{
        int operator*() {
            return iterator::ptr->getElement();
        }

        void operator++(){
            iterator::ptr = iterator::ptr->getNext().get();
        }

        bool operator!=(List::iterator a){
            return (a.getPtr() != iterator::ptr);
        }

        Node *getPtr() const {
            return iterator::ptr;
        }

        void setPtr(Node *ptr) {
            iterator::ptr = ptr;
        }

    private:
        Node* ptr;
    };

    List();

    virtual ~List();

    iterator begin();

    iterator end();

    void push_back(const int &&element);

    void pop_back();

    void foreach(void (*func)(int)) const;

    bool empty() const;
private:
    std::unique_ptr<Node> head;
    List::iterator it;

};


#endif //LIST_LIST_H

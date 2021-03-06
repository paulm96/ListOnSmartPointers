//
// Created by pawel on 25.11.17.
//



#ifndef LIST_LIST_H
#define LIST_LIST_H

#include "Node.h"

class List {
public:
    struct iterator{
    public:
        const int operator*() const {
            return iterator::ptr->getElement();
        }

        void operator++(){
            iterator::ptr = iterator::ptr->getNext().get();
        }

        bool operator!=(List::iterator a) const {
            return (a.getPtr() != iterator::ptr);
        }

        explicit iterator(Node *_ptr);

    private:

        Node *getPtr() const {
            return iterator::ptr;
        }

        Node* ptr;
    };

    List();

    virtual ~List();

    iterator begin();

    iterator end();

    void push_back(const int &&element);

    void pop_back();

    bool empty() const;
private:
    std::unique_ptr<Node> head;


};


#endif //LIST_LIST_H

//
// Created by pawel on 25.11.17.
//



#ifndef LIST_LIST_H
#define LIST_LIST_H

#include "Node.h"

class List {
public:

    List();

    virtual ~List();

    void push_back(const int &&element);

    void pop_back();

    void foreach(void (*func)(int)) const;

    bool empty() const;
private:
    std::unique_ptr<Node> head;

};


#endif //LIST_LIST_H

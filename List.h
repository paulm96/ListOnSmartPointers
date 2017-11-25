//
// Created by pawel on 25.11.17.
//

#include <stddef.h>
#include "Node.h"

#ifndef LIST_LIST_H
#define LIST_LIST_H


class List {
public:
    Node *getHead() const;

    void setHead(Node *head);

private:
    Node *head = nullptr ;

};


#endif //LIST_LIST_H

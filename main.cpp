#include <iostream>
#include "Node.h"
#include "List.h"

using std::cout;
using std::cin;
using std::endl;

int main(){
    //std::unique_ptr<List> L(new List(std::unique_ptr<Node>(new Node(1,nullptr))));
    //auto *L = new List(N);
    //std::unique_ptr<Node> N(new Node(1, nullptr));

    std::unique_ptr<List> L(new List);
    L->push_back(5);

    cout << "Hello, World!" << endl;
    cout << "Press any key to continue...\n";
    //getchar();
}
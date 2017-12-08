#include <iostream>
#include "Node.h"
#include "List.h"

using std::cout;
using std::cin;
using std::endl;

int main(){
    std::unique_ptr<List> L(new List);
    L->push_back(5);
    L->push_back(10);


    cout << "Hello, World!" << endl;
    cout << "Press any key to continue...\n";
    getchar();
}
#include <iostream>
#include "Node.h"
#include "List.h"

using std::cout;
using std::cin;
using std::endl;

int main(){
    Node *N = new Node(1,nullptr);
    List *L;
    L = new List(N);

    delete L;
    cout << "Hello, World!" << endl;
    cout << "Press any key to continue...";
    getchar();
}
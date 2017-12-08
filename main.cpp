#include <iostream>
#include "Node.h"
#include "List.h"

using std::cout;
using std::cin;
using std::endl;

void show(int a){
    std::cout << a << std::endl;
}

int main(){
    auto L = std::make_unique<List>();
    L->push_back(5);
    L->push_back(10);
    L->push_back(15);
    L->foreach(&show);
    L->pop_back();
    L->foreach(&show);


    cout << "Hello, World!" << endl;
    cout << "Press any key to continue...\n";
    getchar();
}
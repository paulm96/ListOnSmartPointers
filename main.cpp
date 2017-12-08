#include <iostream>
#include "Node.h"
#include "List.h"

using std::cout;
using std::cin;
using std::endl;

void show(int a){
    std::cout << a << std::endl;
}

void count(int a){
    static int b;
    std::cout << ++b;
}

int main(){
    auto L = std::make_unique<List>();
    std::cout << L->empty();
    L->push_back(5);
    L->push_back(10);
    L->push_back(15);
    L->foreach(&show);
    L->pop_back();
    L->foreach(&show);
    std::cout << L->empty();
    L->foreach(&count);

    cout << "Press any key to continue...\n";
    getchar();
}
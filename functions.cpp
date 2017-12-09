//
// Created by pawel on 09.12.17.
//

#include <iostream>

template<class Iterator, class Function>
Function for_each(Iterator first, Iterator last, Function fn) {
    while (first != last) {
        fn(*first);
        ++first;
    }
    return std::move(fn);
};

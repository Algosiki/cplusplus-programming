#include <iostream>
#include <vector>
#include "funcs.h"

template <typename T>
bool predicat(T el) {
    return el > 0;
}

template<typename T>
bool sort_cond(T el1, T el2) {
    return el1 > el2;
}


int main() {
    std::vector<int> arr = {1, 2, 3, 4};

    std::cout << is_sorted(arr.begin(), arr.end(), sort_cond<int>);

}

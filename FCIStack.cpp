//
//
#include <vector>
#include "FCIStack.h"
#include <iostream>
#include <algorithm>

template<class T>
FCIStack<T>::FCIStack() :counter{0}{}


template<class T>
void FCIStack<T>::push(T value) {
    qu.push(value);
    counter++;
}

template<class T>
void FCIStack<T>::pop() {
    for (int i = 1; i < counter; ++i) {
        T temp = qu.front();
        qu.pop();
        qu.push(temp);
    }
    qu.pop();
    counter--;
}

template<class T>
bool FCIStack<T>::empty() {
    return qu.empty();
}

template<class T>
std::size_t FCIStack<T>::size() {
    return counter;
}

template<class T>
void FCIStack<T>::print() {
    std::vector<T> vec;
    for (int i = 1; i <=counter; ++i) {
        T temp = qu.front();
        qu.pop();
        qu.push(temp);
        vec.push_back(temp);
    }
   std::reverse(vec.begin(),vec.end());
    for (auto const &i : vec) {
            std::cout<<"|"<<i<<"|"<<std::endl;
    }
    std::cout<<"___"<<std::endl;


}



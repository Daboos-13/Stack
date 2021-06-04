//
//
#include <queue>
#ifndef Q3_2_STACK_FCISTACK_H
#define Q3_2_STACK_FCISTACK_H

template <class T>
class FCIStack {
private:
    std::queue<T> qu;
    std::size_t counter;

public:
    FCIStack();

    void push(T value);

    void pop();

    bool empty();

    std::size_t size();

    void print();
};



#endif //Q3_2_STACK_FCISTACK_H

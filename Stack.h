#include <iostream>
using namespace std;

template <typename T>
class Stack {
private:
    T* arr;
    int top;
    int capacity;

public:
    Stack(int size = 10);
    ~Stack();

    void push(T value);
    void pop();
    bool isEmpty() const;
    T getMin() const;
    T getMax() const;
};
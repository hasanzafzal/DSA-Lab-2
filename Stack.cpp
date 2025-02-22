#include "stack.h"

template <typename T>
Stack<T>::Stack(int size) {
    capacity = size;
    arr = new T[capacity];
    top = -1;
}

template <typename T>
Stack<T>::~Stack() {
    delete[] arr;
}

template <typename T>
void Stack<T>::push(T value) {
    if (top == capacity - 1) {
        cout << "Stack overflow!\n";
        return;
    }
    arr[++top] = value;
}

template <typename T>
void Stack<T>::pop() {
    if (top == -1) {
        cout << "Stack underflow!\n";
        return;
    }
    top--;
}



template <typename T>
bool Stack<T>::isEmpty() const {
    return top == -1;
}

template <typename T>
T Stack<T>::getMin() const {
    if (top == -1) {
        cout << "Stack is empty! Returning default value.\n";
        return T();
    }

    T minVal = arr[0];
    for (int i = 1; i <= top; i++) {
        if (arr[i] < minVal)
            minVal = arr[i];
    }
    return minVal;
}

template <typename T>
T Stack<T>::getMax() const {
    if (top == -1) {
        cout << "Stack is empty! Returning default value.\n";
        return T();
    }

    T maxVal = arr[0];
    for (int i = 1; i <= top; i++) {
        if (arr[i] > maxVal)
            maxVal = arr[i];
    }
    return maxVal;
}


template class Stack<int>;
template class Stack<float>;
template class Stack<double>;
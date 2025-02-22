#include "stack.h"
#include <iostream>
using namespace std;

int main() {
    Stack<int> s(5);
    s.push(10);
    s.push(25.8);
    s.push(4);
    s.push(394);
    s.push(5);

    cout << "Minimum value: " << s.getMin() << endl;
    cout << "Maximum value: " << s.getMax() << endl;

    return 0;
}
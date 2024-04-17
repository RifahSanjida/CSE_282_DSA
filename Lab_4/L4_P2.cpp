//Practice Exercise 2: Take 6 integer values (0 to 5) into a stack and then find the factorial of each stack element. Store the outputs in another stack. Print the output in the
//following way:
//Factorial : 0 = 1
//Factorial : 1 = 1
//Factorial : 2 = 4
#include <iostream>
#include <stack>
using namespace std;

int factorial(int n) {
    return (n <= 1) ? 1 : n * factorial(n - 1);
}

int main() {
    stack<int> inputStack;

    cout << "Enter 6 integer values (0 to 5):" << endl;
    for (int i = 0; i < 6; ++i) {
        int value;
        cin >> value;
        inputStack.push(value);
    }

    int index = 0;
    cout << "Factorials:" << endl;
    stack<int> outputStack;
    while (!inputStack.empty()) {
        int currentValue = inputStack.top();
        outputStack.push(factorial(currentValue));
        inputStack.pop();
        index++;
    }

    index = 0; // Reset index for output
    while (!outputStack.empty()) {
        cout << "Factorial : " << index++ << " = " << outputStack.top() << endl;
        outputStack.pop();
    }

    return 0;
}

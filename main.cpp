#include <iostream>
#include "FCIStack.cpp"
using namespace std;
int main() {

    FCIStack<int> stack ;
    while (true) {
        cout << "welcome to queue using stack program" << endl;
        cout << "1- push" << endl;
        cout << "2- pop" << endl;
        cout << "3- size" << endl;
        cout << "4- print" << endl;
        cout << "0- exit" << endl;
        string choice;
        int value;
        cin >> choice;
        if (choice == "1") {
            cout << "enter the value : " << endl;
            cin >> value;
            stack.push(value);
            stack.print();
        } else if (choice == "2") {
            if (stack.empty()) {
                cout << "stack is empty" << endl;
            } else {
                stack.pop();
                stack.print();
            }
        } else if (choice == "3") {
            cout << "the size is : " << stack.size() << endl;

        } else if (choice == "4") {
            if (stack.empty()) {
                cout << "stack is empty" << endl;
            } else {
                stack.print();
            }

        } else if (choice == "0") {
            break;
        }
    }
    return 0;
}

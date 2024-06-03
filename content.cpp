#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;

    cout << "Enter the operator ( + - * / ):";
    cin >> op;

    cout << "Enter the two numbers :";
    cin >> num1 >> num2;

    switch (op) {
        case '+' :
        cout << num1 << op << num2 << " = " << num1 + num2 << endl;
        break;
        case '-' :
        cout << num1 << op << num2 << " = " << num1 - num2 << endl;
        break;
        case '*' :
        cout << num1 << op << num2 << " = " << num1 * num2 << endl;
        break;
        case '/' :
        if(num2 != 0.0){
            cout << num1 << op << num2 << " = " << num1 / num2 << endl;
        }
        else {
            cout << "Divide by zero situation";
        }
        
        break;

    default: 
        cout << "invalid operator";
    }
    return 0;
}
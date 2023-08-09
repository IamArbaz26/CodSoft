#include <iostream>
using namespace std;

int main() 
{
    float num1, num2;
    char operation;
    float result;

    cout << "------------------" << endl;
    cout << "Simple Calculator " << endl;
    cout << "------------------" << endl;
    
    cout << "Enter 1st number: " << endl;
    cin >> num1;

    cout << "Enter 2nd number: " << endl;
    cin >> num2;
    
    cout << "Enter an operator (+, -, *, /): " << endl;
    cin >> operation;

    switch (operation) 
    {
        case '+':
            result = num1 + num2;
            break;

        case '-':
            result = num1 - num2;
            break;

        case '*':
            result = num1 * num2;
            break;

        case '/':
            if (num2 != 0) 
            {
                result = num1 / num2;
            } 
            else 
            {
                cout << "Error" << endl;
                return 1; 
            }
            break;
        default:
            cout << "Invalid operator." << endl;
            return 1;  
    }

    cout << "Result: " << result << endl;

    return 0;  
}

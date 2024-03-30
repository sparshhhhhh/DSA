#include <iostream>
using namespace std;

int main()
{
    int a, b;
    char opr;
    bool run = true;
    while (run == true) // infinite loop
    {
        cout << "Enter value of a: ";
        cin >> a;
        cout << "Enter value of b: ";
        cin >> b;
        cout << "Enter operation or press # to exit: ";
        cin >> opr;

        switch (opr)
        {
        case '+':
            cout << "Answer: " << a + b;
            break;
        case '-':
            cout << "Answer: " << a - b;
            break;
        case '*':
            cout << "Answer: " << a * b;
            break;
        case '/':
            cout << "Answer: " << a / b;
            break;
        case '#':
            cout << "Exiting...";
            run = false; // to exit from infinite loop
            break;

        default:
            cout << "Enter a valid operator";
            break;
        }
        cout << endl
             << endl;
    }
}
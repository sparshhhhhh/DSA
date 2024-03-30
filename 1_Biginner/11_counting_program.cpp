#include <iostream>
using namespace std;

// use void when we dont return anything 
//but print the output
void printCounting(int n)
{

    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
}
int main()
{

    int n;
    cout << "Enter number: ";
    cin >> n;
    //function call
    printCounting(n);
}
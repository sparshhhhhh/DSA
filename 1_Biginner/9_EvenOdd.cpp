#include <iostream>
using namespace std;

// 1 -> even
// 0 -> odd
bool isEven(int n)
{
    if (n % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int ans = isEven(n);
    if (ans == 1)
    {
        cout << n << " is Even";
    }
    else
    {
        cout << n << " is Odd";
    }
}
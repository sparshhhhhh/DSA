#include <iostream>
using namespace std;

int power(int a, int b)
{
    int ans = 1;
    while (b != 0)
    {
        ans = ans * a;
        b--;
        power(a, b);
    }
    return ans;
}
int main()
{
    int a;
    int b;
    cout << "Enter the number: ";
    cin >> a;
    cout << "Enter the power: ";
    cin >> b;
    cout << a << " raised to the power " << b << " = " << power(a, b);
}
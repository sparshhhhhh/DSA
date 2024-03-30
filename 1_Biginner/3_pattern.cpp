#include <iostream>
using namespace std;

int main()
{

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    
    cout << endl;
    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j < 5; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    cout << endl;
    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j < 5; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    cout << endl;
    for (int i = 4; i > 0; i--)
    {
        for (int j = 4; j > 0; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    cout << endl;
    int count = 1;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << count << " ";
            count += 1;
        }
        cout << endl;
    }

    cout << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    cout << endl;
    count = 1;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << count << " ";
            count += 1;
        }
        cout << endl;
    }
}
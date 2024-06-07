#include<iostream>
using namespace std;

int main(){
    string str = "Hello";
    cout<<str << endl;
    str.push_back('o');
    cout<<str <<endl;
    str.pop_back();
    cout<<str;
}
#include<iostream>
using namespace std;

void dummy(int n){

    n++; // n increments, 15->16
    cout<<"n is "<<n<<endl;
}

int main(){

    int n = 15;
    dummy(n); //will print incremented value of n

    cout<<"n is "<<n; //Here n ki value is 15

}
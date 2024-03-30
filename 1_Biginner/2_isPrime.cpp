#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int i = 2;
    while(i<n){
        if(n%i == 0){
            cout<< n <<" is Not prime for "<< i <<endl;
        }
        else{
            cout<< n <<" is prime for "<< i << endl;
        }
        i++;
    }
}
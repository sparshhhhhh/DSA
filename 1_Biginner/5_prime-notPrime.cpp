#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    bool flag = 1;

    for(int i =2;i<n;i++){
        if(n%i==0){
            flag = 0;
            break; //Use of break  
        }
    }
    if(flag == 0){
        cout<<n<<" is not a prime number";
    }
    else{
        cout<<n<<" is a prime number";
    }
}
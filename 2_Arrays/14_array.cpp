#include<iostream>
using namespace std;

void printArray(int arr[],int size){
  
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    //declare
    int a[10];

    //initialize
    int b[3] = {1,2,3};
    cout<<"Element at 2nd index in array b: "<<b[1]<<endl;
    cout<<"Array b: ";
    printArray(b,3);
    cout<<endl;
    
    //initialize and input array
    int c[5];
    cout<<"Enter the elements of array: ";
    for(int i = 0;i<5;i++){
        cin>>c[i];
    }
    //print array
    cout<<"Array c: ";
    for(int i = 0;i<5;i++){
        cout<<c[i]<<" ";
    }
    cout<<endl;

    //character array
    char ch[5] = {'a','b','c','d','e'};
    cout<<"Array ch: ";
    for(int i = 0;i<5;i++){
        cout<<ch[i]<<" ";
    }

    return 0;
}
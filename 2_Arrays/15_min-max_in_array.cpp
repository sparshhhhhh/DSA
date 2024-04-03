#include<iostream>
using namespace std;

int getMax(int arr[],int n){
    
    int max = arr[1];

    for(int i = 0; i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}

int getMin(int arr[],int n){
    
    int min = arr[1];

    for(int i = 0; i<n;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;
}

int main(){

    int size;
    cout<<"Enter size of array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter elements of array: ";
    for(int i = 0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Array: ";
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"Max element: "<<getMax(arr,size)<<endl;
    cout<<"Min element: "<<getMin(arr,size);

    return 0;
}
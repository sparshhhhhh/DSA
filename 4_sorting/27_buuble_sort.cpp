#include<iostream>
using namespace std;

void bubbleSort(int arr[], int size){

    for(int i = 0; i<size; i++){
        for(int j = 0; j<size-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

void printArray(int arr[], int size){

    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int arr[5] = {10, 7, 3, 19, 13};
    int size = sizeof(arr)/sizeof(arr[0]);

    bubbleSort(arr, size);
    cout<<"Sorted array : ";
    printArray(arr, size);
}
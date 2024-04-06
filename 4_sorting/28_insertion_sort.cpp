#include<iostream>
using namespace std;

void insertionSort(int arr[], int size){

    for(int i = 1; i<size; i++){
        int temp = arr[i];
        int j = i-1;
        for(j = i-1; j>=0; j--){
            if(arr[j]>temp){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
    }
}

void printArray(int arr[], int size){

    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" "; 
    }
}

int main(){

    int arr[5] = {5, 13, 2, 9, 7};
    int size = sizeof(arr)/sizeof(arr[0]);

    insertionSort(arr,size);
    cout<<"Sorted array : ";
    printArray(arr,size);

}
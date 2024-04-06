#include<iostream>
using namespace std;

int binary_search(int arr[], int size, int key){

    int l = 0;
    int r = size - 1;

    int mid = l + (r-l)/2;

    while(l<=r){
        if( arr[mid] == key ){
            return mid;
        }
        else if( key > arr[mid] ){
            l = mid + 1;
        }
        else{
            r = mid - 1;
        }
        mid = l + (r-l)/2;
    }
    return -1;
}

int main(){

    int odd_arr[9] = {1,2,3,4,5,6,7,8,9};
    int even_arr[8] = {1,2,3,4,5,6,7,8};
    int key;
    cout<<"Enter the element to be searched in odd array: ";
    cin>>key;
    cout<<"Element in odd_arr is at index -> "<<binary_search(odd_arr, 9, key)<<endl;
    
    cout<<"Enter the element to be searched in even array: ";
    cin>>key;
    cout<<"Element in even_arr is at index -> "<<binary_search(even_arr, 8, key)<<endl;

}
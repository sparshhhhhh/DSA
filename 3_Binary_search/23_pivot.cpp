#include <iostream>
using namespace std;

int getPivot(int arr[], int n){

    int l = 0;
    int r = n-1;
    int mid = l + (r-l)/2;

    while(l<r){
        if(arr[mid]>=arr[0]){
            l = mid+1;
        }
        else{
            r = mid;
        }
        mid = l + (r-l)/2;
    }
    // return l;
    return arr[l];
}

 int main(){

    int arr[5] = {4,5,1,2,3};
    cout<<"Pivot is: "<< getPivot(arr,5) <<endl;
 }
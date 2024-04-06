#include<iostream>
#include<vector>
using namespace std;

int peak(vector<int>& arr, int n){

    int l = 0;
    int r = n-1;
    int mid = l + (r-l)/2;
    int ans = 0;

    while(l<r){
        if(arr[mid]<arr[mid+1]){
            l = mid + 1;
        }
        else{
            r = mid;
        }
        mid = l + (r-l)/2;
    }
    return mid;
}

int main(){

    vector<int> arr = {1,2,3,4,5,1};

    cout<<"Peak index: "<<peak(arr,6);

}
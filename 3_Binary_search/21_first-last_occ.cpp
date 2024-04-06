#include<iostream>
#include<vector>

using namespace std;

int first_occ(vector<int>& arr, int n, int k){
    int l = 0;
    int r = n-1;
    int mid = l + (r-l)/2;
    int ans = -1;

    while(l<=r){
        if(arr[mid] == k){
            ans = mid;
            r = mid-1;
        }
        else if(arr[mid]<k){
            l = mid+1;
        }
        else{
            r = mid-1;
        }
        mid = l + (r-l)/2;
    }
    return ans;
}

int last_occ(vector<int>& arr, int n, int k){
    int l = 0;
    int r = n-1;
    int mid = l + (r-l)/2;
    int ans = -1;

    while(l<=r){
        if(arr[mid] == k){
            ans = mid;
            l = mid+1;
        }
        else if(arr[mid]<k){
            l = mid+1;
        }
        else{
            r = mid-1;
        }
        mid = l + (r-l)/2;
    }
    return ans;
}

int main(){

    vector<int> arr = {1,2,3,3,3,4,4,5,6};
    cout<<"First occurence : "<<first_occ(arr, 9, 3)<<endl;;
    cout<<"last occurence: "<<last_occ(arr, 9, 3)<<endl;

    int total = (last_occ(arr,9,3) - first_occ(arr,9,3)) + 1;
    cout<<"Total no. of occurence: "<<total;

}
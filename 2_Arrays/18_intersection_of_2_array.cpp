#include<iostream>
using namespace std;

int main(){
    int m = 6;
    int n = 4;
    int a[m] = {1,2,2,2,3,4};
    int b[n] = {2,2,3,5};

    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            if(a[i]==b[j]){
                cout<<a[i]<<" ";
                break;
            }
        }
    }

    return 0;
}
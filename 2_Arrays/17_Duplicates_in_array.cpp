#include<iostream>
using namespace std;
int main(){
    int ans = 0;
    int arr[6] = {1,2,3,3,4,5};
    for(int i = 0; i<6;i++){
        ans = ans^arr[i];
    }
    
    for(int i = 1; i<6;i++){
        ans = ans^i;
    }
    cout<<ans;

    return 0;    
}
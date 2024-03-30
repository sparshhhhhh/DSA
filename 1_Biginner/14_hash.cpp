#include <iostream>
using namespace std;

int main(){

    int nums[15] = {0,1,1,2,2,2,3,3,3,3,4,4,4,4,4};
    int hash[15] = {0};

    for(int i = 0; i<15; i++){
        hash[nums[i]] += 1;
    }

    for(int i = 0; i<15; i++){
        cout<<i<<" "<<hash[i]<<endl;
    }

    return 0;
}
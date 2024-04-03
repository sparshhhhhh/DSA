#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {1,1,0,1,1,1};
        int maxOcc = 0;
        int cnt = 0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] == 1){
                cnt++;   
            }
            else{
                maxOcc = max(maxOcc, cnt);
                cnt = 0;
            }
        }
        cout<<max(maxOcc, cnt);
}
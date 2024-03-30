#include <iostream>
#include<math.h>
using namespace std;

int main(){
    int n = 10;
    cout<<"In decimal: "<<n<<endl;
    int ans = 0;
    int i = 0;
    while(n != 0){
        int bit = n & 1; //AND with 1, to find last bit
        ans = (bit * pow(10,i)) + ans;
        n = n>>1;
        i++;
    }
    cout<<"In binary: "<<ans;

    cout<<endl;

    int res = 0;
    int j = 0;
    int m = 101;
    cout<<"In binary: "<<m<<endl;
    while(m != 0){
        int dig = m%10; //mod with 10, to find last digit
        res =  (dig * pow(2,j)) + res;
        m = m/10;
        j++;
    }
    cout<<"In decimal: "<<res;
}
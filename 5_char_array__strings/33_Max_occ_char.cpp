#include<iostream>
using namespace std;

char MaxOccChar(string str){

    int arr[26] = {0};
    //create array of count of characters
    for(int i = 0; i<= str.length(); i++){
        char ch = str[i];
        //lowercase
        int number = 0;
        if (ch >= 'a' && ch <= 'z'){
            number = ch - 'a';
        }
        //uppercase
        else{
            number = ch - 'A';
        }
        arr[number]++;
    }
    //find max occ char
    int maxi = -1, ans = 0;
    for(int i = 0; i<26; i++){
        if(maxi < arr[i]){
            ans = i;
            maxi = arr[i];
        }
    }

    char answer = 'a' + ans;
    return answer;
}

int main(){

    string str;
    cout<<"Enter string: ";
    cin>> str;

    cout<<"Max occ of char -> "<<MaxOccChar(str);

}
#include<iostream>
using namespace std;

void reverse(char name[], int n){
    int l = 0;
    int r = n-1;
    while(l<r){
        swap(name[l++], name[r--]);
    }
}

bool checkPalindrome(char name[], int n){
    int l = 0;
    int r = n-1;
    while(l<r){
        if(name[l] != name[r]){
            return 0;
        }
        else{
            l++;
            r--;
        }
    }
    return 1;
}

int length(char name[]){
    int count = 0;
    for(int i = 0; name[i] != '\0'; i++){
        count +=1;
    }
    return count;
}

int main(){

    char name[10];
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Name -> ";
    cout<<name<<endl;

    //Length of string
    int len = length(name);
    cout<<"Length of string is -> "<<length(name) <<endl;

    //Reverse of string
    reverse(name, len);
    cout<<"Reverse of string -> "<<name <<endl;

    //Check if palindrome
    if(checkPalindrome(name,len) == 1){
        cout<<"is palindrome -> TRUE";
    }
    else{
        cout<<"is palindrome -> FALSE";
    }
}
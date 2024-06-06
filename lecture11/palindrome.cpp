#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    string str;
    cin>>str;
    string reverse_str=str;
    int n=str.size();
    for(int i=0;i<n/2;i++){
        swap(reverse_str[i],reverse_str[n-i-1]);
    }
    if(reverse_str==str){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
    return 0;
}
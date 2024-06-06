#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int x;
    cin>>x;
    string str=to_string(x);
    int n=str.size();
    int sum=str[0]-'0'+str[n-1]-'0';
    cout<<sum;
    return 0;
}
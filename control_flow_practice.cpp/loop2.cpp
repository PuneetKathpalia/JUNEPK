#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int n;
    cin>>n;

    int first=0;
    int second=1;
    int third=0;
    cout<<"Fibbonacci "<<endl;
    for (int i=0;i<=n-1;i++){
        cout<<third;
        first=second;
        second=third;
        third=first+second;
    }
    return 0;
}
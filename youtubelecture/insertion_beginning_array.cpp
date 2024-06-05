#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int a[10],n,x;
    cin>>n;
    cout<<"enter";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter elememnt";
    cin>>x;
    for(int i=n;i<n;i--){
        a[i]=a[i-1];
    }
        return 0;
}
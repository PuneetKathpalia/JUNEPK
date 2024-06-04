#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int number;
    cin>>number;
    int count=0;

    if(number==0){
        cout<<1;
    }
    else{
    for (int i=number;i>0;i/=10){
        count++;
    }
    cout<<count;
    }
    return 0;
}
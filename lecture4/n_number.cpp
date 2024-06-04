#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int number;
    cin>>number;
    for (int i=0;i<=number;i++){
        cout<<i<<endl;
    }
    cout<<endl;
    for (int i=number;i>=0;i--){
        cout<<i<<endl;
    }
    return 0;
}
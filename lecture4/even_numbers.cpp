#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int number;
    cin>>number;

    for(int i=0;i<=number;i++){
        if(i%2==0){
            cout<<"Even "<<i<<endl;
        }else{
            cout<<"Odd "<<i<<endl;
        }
    }
    cout<<endl;
    for(int i=0;i<=number;i=i+2){
        cout<<i<<endl;
    }
    return 0;
}
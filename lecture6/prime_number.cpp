#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int number;
    cin>>number;

    if(number<=1){
        cout<<"Not Prime";
    }else{
        int factor_count=0;
        for(int i =1;i<=number;i++){
            if(number%i==0){
                factor_count++;
            }
        }
        if(factor_count==2){
            cout<<"Prime";
        }else{
            cout<<"Not Prime";
        }
    }
    return 0;
}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int number;
    cin>>number;

    int k;
    cin>>k;

    for (int i=0;i<=number;i++){
        int sum=0;
        for (int j=i;j>0;j/=10){
            sum+=(j%10);
        }
        if(k==sum){
            cout<<i<<" is "<<k<<endl;
        }
    }
    return 0;
}
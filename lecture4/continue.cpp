#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
   int number;
    cin>>number;

    for (int i=1;i<=number;i++){
        
    if (i%4==0){
        continue;
    }
    
        if((i%3==0) && (i%5==0)){
            cout<<"FizzBuzz"<<endl;
        }else if (i%3==0){
            cout<<"Buzz"<<endl;
        }else if(i%5==0){
            cout<<"Fizz"<<endl;
        }else{
            cout<<i<<endl;
        }
    }
    return 0;
}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int arr[4][3]={
        {3,5,6},{7,8,3},{10,2,7},{9,7,3}

    };
        for(int j=0;j<3;j++){
       int sum=0;
    for(int i=0;i<4;i++){
            sum+=arr[i][j] ;
        }
        cout<<"sum for the"<<j+1<<"row is"<<sum<<endl;
    }
    return 0;
}
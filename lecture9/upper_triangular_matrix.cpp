#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int arr[4][4]={
        {3,5,6},{7,8,3},{10,2,7},{9,7,3}

    };
    int count =1;

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            arr[i][j]=count;
            count++;
        }
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            arr[i][j]=count;
        }
        cout<<endl;
    }
    cout<<"the left diagonal element are"<<endl;
    for(int i=0;i<4;i++){
        cout<<arr[i][i];
    }
    cout<<endl;
    cout<<"the left diagonal element are"<<endl;
    for(int i=0;i<4;i++){
        int j=4-1-i;
        cout<<arr[i][j];
    }
    return 0;
} 
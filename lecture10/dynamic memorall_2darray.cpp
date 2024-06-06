#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int **arr=new int *[10];
    int size_array[10];
    for(int i=0;i<10;i++){
        int siz;
        cin>>siz;
        size_array[i]=siz;
        arr[i]=new int [siz];
    }
    for(int i=0;i<10;i++){
        int siz=size_array[i];
        for(int j=0;j<siz;j++){
            cout<<arr[i][j]<<" ";
        }
    }
    return 0;
}
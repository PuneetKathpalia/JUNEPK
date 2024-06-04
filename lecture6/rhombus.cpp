#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int number;
    cin>>number;

    for (int i=1;i<=number;i++){
        int space_count=i-1;
        int star_count=number;

        for (int j=1;j<=space_count;j++){
            cout<<" ";
        }
        for (int j=1; j<=star_count;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
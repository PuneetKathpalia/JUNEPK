#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int x=10;
    string x_string=to_string(x);
    cout<<x_string<<endl;
    x_string+="99";
    cout<<x_string<<endl;
    int y=stoi(x_string);
    cout<<y<<endl;

    return 0;
}
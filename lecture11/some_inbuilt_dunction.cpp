#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    string str="puneet kathplia";
    //size
    cout<<str.size()<<endl;
    //substr
    cout<<str.substr(2,4)<<endl;
    //erase
    cout<<str.erase(6,1)<<endl;
    cout<<str.erase(0,6)<<endl;//it erase from 0 to 6 ;
    //insert

    cout<<str.insert(4,"kathplia")<<endl;//after 4 keyword it will add name 
    //append
    cout<<str.append("kathplia")<<endl;


    return 0;
}
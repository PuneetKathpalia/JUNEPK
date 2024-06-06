#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    string str1="puneet";
    string str2="kathpalia";
    string str3=str1+" "+str2;
    cout<<str3<<endl;;
    str1+=" ";//puneet..
    str1+=str2;//puneet kathpalia
    cout<<str1;



    return 0;
}
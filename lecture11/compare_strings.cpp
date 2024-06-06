#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    string str1="puneet";
    string str2="kathpalia";
    if(str1==str2){
        cout<<"they are same"<<endl;

    }
    else{
        cout<<"they are not same"<<endl;
    }
    int flag=1;
    // for(int i=0;i<4;i++){
    //     if(toupper(str1[i])!=toupper(str2[i])){
    //     flag=0;
    //     break;
    // }
    // }
    cout<<str1.compare(str2);///str1-str2
    return 0;
}
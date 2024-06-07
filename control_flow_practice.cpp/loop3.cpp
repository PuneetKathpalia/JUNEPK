// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
    
// int main(){
//     int num1,num2,max,lcm;
//     cin>>num1>>num2;
//     if(num1>num2){
//         max=num1;
//     }
//     else{
//         max=num2;
//     }
//     int i=max;
//     while(true){
//         if(i%num1==0 && i%num2==0){
//             lcm=i;
//             break;
//         }
//             i+=max;
//     }
//     cout<<lcm;

//     return 0;
// }

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int num1,num2,hcf,min;
    cin>>num1>>num2;
    if(num1<num2){
        min=num1;
    }
    else{
        min=num2;
    }
    for(int i=0;i<=min;i++){
        if(num1%i==0 && num2%i==0){
            hcf=i;
        }
    }
    cout<<hcf;
v    return 0;
}
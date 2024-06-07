// Write a C++ program to input a number from user and find all factors of the given number using for loop. 

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
    
// int main(){
//     int num;
//     cin>>num;
//     for(int i=1;i<=num;i++){
//         if(num%i==0){
//             cout<<i<<" ";
//         }
//     }
//     return 0;
// }

// Write a program in C++ to input a number and check whether the number is prime number or not using for loop.
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
    
// int main(){
//     int number;
//     cin>>number;
//     int factor=0;
//     for(int i=1;i<number+1;i++){
//         if(number%i==0){
//             factor++;
//         }
//     }
//     if(factor==2){
//         cout<<"Prime Number";
//     }else{
//         cout<<"Not Prime Number";
//     }
//     return 0;
// }

// Write a C++ program to print all Prime numbers between 1 to n using loop

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
bool isprime(int a){
    for(int i=2;i*i<=a;i++){
        if(a%i==0) return false;
    }
    return true;
};
int main(){
    int number;
    cin>>number;

    for(int i=2;i<=number;i++){
        if((isprime(i))){
            cout<<i<<" ";
        }
    }
    return 0;
}
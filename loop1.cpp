// Write a C++ program to input a number and find the sum of first and last digit of the number using a for loop. 
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
    
// int main(){
//     int number;
//     cin>>number;
//     int last=number%10;;
//     int first=number;
//     for(int i=number;i>0;i/=10){
//        first=i;
//     }
//     cout<<last+first;
//     return 0;
// }


// Write a C++ program to input a number from the user and calculate product of its digits. 
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
    
// int main(){
//     int number;
//     cin>>number;

//     int last=number%10;
//     int first=number;
//     for(int i=number;i>0;i/=10){
//         first=i;
//     }
//     cout<<first*last;
//     return 0;
// }
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
    
// int main(){
//     int number;
//     cin>>number;

//     int product=1;
//     int last=0;
//     for (int i=number;i>0;i/=10){
//         last=i%10;
//         product*=last;
//     }
//     cout<<product;
//     return 0;
// }

// Write a C++ program to input number from user and check number is palindrome or not using loop. 
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
    
// int main(){
//     int number;
//     cin>>number;
//     int original=number;
//     int reverse=0;
//     for (int i=number;i>0;i/=10){
//         reverse=reverse*10+i%10;
//     }
//     if(original==reverse){
//         cout<<"Palindrome";
//     }else{
//         cout<<"Not Palindrome";
//     }
//     return 0;
// }


// Write a C++ program to find power of a number using for loop. 
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
    
// int main(){
//     int base,exponent;
//     cin>>base>>exponent;

//     int power=1;
//     for(int i=1;i<=exponent;i++){
//         power=power*base;
//     }
//     cout<<power;
//     return 0;
// }



// Write a C++ program to print Fibonacci series up to n terms using loop.
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int n;
    cin>>n;

    int first=0;
    int second=1;
    int third=0;
    cout<<"Fibbonacci "<<endl;
    for (int i=0;i<=n-1;i++){
        cout<<third<<" ";
        first=second;
        second=third;
        third=first+second;
    }
    return 0;
}
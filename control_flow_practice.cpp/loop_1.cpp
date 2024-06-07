// Write a C++ program to input a number and find the sum of first and last digit of the number using a for loop.
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
    
// int main(){
//     int num,lastdig,firstdig,sum=0;

//     cin>>num;
//     lastdig=num%10;
//     firstdig=num;
//     while (num>=10){
//         num=num/10;
//     }
//     firstdig=num;
//     sum=lastdig+firstdig;

//     cout<<sum;
//     return 0;
// }


// Write a C++ program to input a number from the user and calculate product of its digits.
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
//     int num,rev=0,n;
//     cin>>num;
//     n=num;
//     while(num!=0){
//         rev=(rev*10)+(num%10);
//         num/=10;
//     }
//     if(rev==n){
//         "yes ";
//     }
//     else{
//         cout<<"no";
//     }
//     return 0;
// }

// Write a C++ program to find power of a number using for loop.


// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
    
// int main(){
//     int num,pow;
//     cin>>num>>pow;
//     int upper=1;
//     for(int i=1;i<=pow;i++){
//         upper=upper*num;
//     }
//     cout<<num<<" "<<pow<<" "<<upper;
//     return 0;
// }

// Write a C++ program to print Fibonacci series up to n terms using loop
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
        cout<<third;
        first=second;
        second=third;
        third=first+second;
    }
    return 0;
}
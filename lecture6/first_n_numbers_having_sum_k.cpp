#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
// function
int get_digit_sum(int number){
    int digit_sum = 0;
     for(int rem = number; rem > 0; rem /= 10) {
            digit_sum += rem %10;
    }
    return digit_sum;
}

int main(){
    // int n, k;
    // cin>>n>>k;

    // int count = 0;
    // int number = 1;
    // while(count < n) {
    //     int digit_sum = 0;
    //     for(int rem = number; rem > 0; rem /= 10) {
    //         digit_sum += rem %10;
    //     }

    //     if(digit_sum == k) {
    //         count++;
    //         cout<<number<<endl;
    //     }
    //     number++;
    // }

    int n, k;
    cin>>n>>k;

    int count = 0;
    int number = 1;
    while(count < n) {
        int digit_sum=get_digit_sum(number);
        if(digit_sum == k) {
            count++;
            cout<<number<<endl;
        }
        number++;
    }
    return 0;
}
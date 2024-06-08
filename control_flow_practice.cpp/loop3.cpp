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

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
    
// int main(){
//     int num1,num2,hcf,min;
//     cin>>num1>>num2;
//     if(num1<num2){
//         min=num1;
//     }
//     else{
//         min=num2;
//     }
//     for(int i=0;i<=min;i++){
//         if(num1%i==0 && num2%i==0){
//             hcf=i;
//         }
//     }
//     cout<<hcf;
//     return 0;
// }


// armstrong num
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
    
// int main(){
//     int n,sum=0;
//     cin>>n;
//     int temp=n;
//     while(n!=0){
//         int rem=n%10;
//        sum=sum+rem*rem*rem;
//         n/=10;

//     }
//     if(temp==sum){
//         cout<<"armstrong num";
//     }
//     else{
//         cout<<"not armstrong";
//     }
//     return 0;
// }

// Write a C++ program to print all Armstrong numbers between 1 to n where n is the input given by the user.
#include<iostream>
using namespace std;

int main(){
    int m, n, sum, digit;
    cin >> m;
    for(int i = 1; i <= m; i++){
        n = i;
        sum = 0;
        while(n != 0){
            digit = n % 10;
            sum = sum + digit * digit * digit;
            n/= 10;
        }
        if(i == sum){
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}

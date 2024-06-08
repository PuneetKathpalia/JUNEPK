// // Write a C++ program to input a number and check whether the number is a Perfect number or not. 
// #include <iostream>
// using namespace std;

// int main() {
//     int n, sum = 0;
//     cin >> n;
//     for (int i = 1; i <= n / 2; i++) {
//         if (n % i == 0) {
//             sum += i;
//         } 
//     }
//     if (sum == n && n > 0) {
//         cout << "perfect number" << endl;
//     } else {
//         cout << "not a perfect number" << endl;
//     }
    
//     return 0;
// }

// Write a C++ program to find all Perfect numbers between 1 to n where n is the input given by the user.
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n, sum;
//     cin >> n;
//      for(int i = 1; i <= n; i++)
//     {
//         sum = 0;
//         for(int j = 1; j < i; j++)
//         {
//             if(i % j == 0)
//             {
//                 sum += j;
//             }
//         }
//         if(sum == i)
//         {
//             cout << i << " ";
//         }
//     }

//     return 0;
// }
// Write a C++ program to input a number from the user and check whether the given number is a strong number or not.
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
    
// int main(){
// int n,fact=1,sum=0;
// cin>>n;
// int number=n;
// while(n>0){
// int rem=n%10;

// for(int i=1;i<=rem;i++){

// fact=fact*i;
// }
// int sum=sum+fact;
// n/=10;
// }
// if(sum==number){
//     cout<<"strong";
// }
// else{
//     cout<<"not strong";
// }
//     return 0;
// }


// Write a C++ program to print all strong numbers between 1 to n where n is the input given by the user.

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
    
// int main(){
//    int n,num,sum,fact;
//    cin>>n; 
//    for(int i=1;i<n;i++){
//     num=i;
//     sum=0;
//     while(num>0){
//         fact=1;
//         int rem=num%10;

// for(int j=1;j<=rem;j++){

// fact=fact*j;
// }
// sum+=fact;
// num/=10;
//     }
//     if(sum==i){
//     cout<<i<<" ";
// }
//    }
//     return 0;
// }
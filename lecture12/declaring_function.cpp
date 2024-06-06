// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
    
//     void func(){
//         cout<<"hello pk";
//     }
// int main(){
//     func();
//     return 0;
// }

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    int sum_2_nums(int a,int b){
        int sum=a+b;
        return sum;
    }
int main(){
    int num1,num2;
    cin>>num1>>num2;
    int ans=sum_2_nums(num1,num2);
    cout<<ans;
    return 0;
}
 
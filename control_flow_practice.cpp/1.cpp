// Write a C++ program to find maximum between three numbers.
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
    
// int main(){
//     int a,b,c;
//     cin>>a,b,c;
//     if(a>b && a>c){
//         cout<<a<<"is greater";
//     }
//     else if(b>a && b>c){
//         cout<<b;
//     }
//     else{
//         cout<<c;
//     }
//     return 0;
// }

// Write a C++ program to input a character from user and check whether given character is alphabet, digit or special character
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
    
// int main(){
//     char ch;
//     cin>>ch;

//     if(ch>='a' &&ch<='z' ||ch>='A' && ch<='Z'){
//         cout<<ch <<"is alphabet";
//     }
//     else if(ch>=0 && ch<=9){
//         cout<<ch<<"is number";
//     }
//     else{
//         cout<<"last cas whiich is left";
//     }
//     return 0;
// }


// Write a C++ program to input amount from user and print minimum number of notes (Rs. 500, 100, 50, 20, 10, 5, 2, 1) required for the amount.

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
    
// int main(){
//     int money;
//     cin>>money;
//     int rupe500,rupe100,rupe50,rupe20,rupe10,rupe5,rupe2,rupe1;
//     rupe500=rupe100=rupe50=rupe20=rupe10=rupe5=rupe2=rupe1=0;
//     if(money>=500)
//     {
//         rupe500=money/500;
//         money-=rupe500*500;
//     }
//     if(money>=100)
//     {
//          rupe100=money/100;
//         money-=rupe100*100;
//     }
//     if(money>=50)
//     {
//          rupe50=money/50;
//         money-=rupe50*50;
//     }
//     if(money>=20)
//     {
//          rupe20=money/20;
//         money-=rupe20*20;
//     }
//     if(money>=10)
//     {
//         int rupe10=money/10;
//         money-=rupe10*10;
//     }
//     if(money>=5)
//     {
//         int rupe5=money/5;
//         money-=rupe5*5;
//     }
//     if(money>=2)
//     {
//         rupe2=money/2;
//         money-=rupe2*2;
//     }
//     if(money>=1)
//     {
//         rupe1=money;
//     }

// cout<<rupe500<<" "<<"500 cash"<<endl;
// cout<<rupe100<<" "<<"100 cash"<<endl;
// cout<<rupe50<<" "<<"50 cash"<<endl;
// cout<<rupe20<<" "<<"20 cash"<<endl;
// cout<<rupe10<<" "<<"10 cash"<<endl;
// cout<<rupe5<<" "<<"5 cash"<<endl;
// cout<<rupe2<<" "<<"2 cash"<<endl;
// cout<<rupe1<<" "<<"1 cash"<<endl;
//     return 0;
// }

// Write a C++ program to input sides of a triangle and check whether a triangle is equilateral, scalene or isosceles triangle
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
    
// int main(){
//     int s1,s2,s3;
//     cin>>s1>>s2>>s3;
//     if(s1==s2 && s2==s3){
//         cout<<"equilateral";
//     }
//     else if(s1==s2||s2==s3||s1==s3){
//         cout<<"isosceles";
//     }
//     else{
// cout<<"jo bacha vo hai ";
//     }


//     return 0;
// }

// Write a C++ program to input electricity unit charge and calculate the total electricity bill according to the given condition:
// For first 50 units Rs. 0.50/unit
// For next 100 units Rs. 0.75/unit
// For next 100 units Rs. 1.20/unit
// For unit above 250 Rs. 1.50/unit
// An additional surcharge of 20% is added to the bill.

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int unit;
    cin>>unit;
    float money;
    if(unit<=50){
        money=unit*0.50;
    }
    else if(unit<=150){
        money=(0.5*50)+(0.75*(unit-50));
    }
    else if(unit<=150){
        money=(0.5*50)+(0.75*100)+(1.2*(unit-150));
    }
    else{
        money=(0.5*50)+(0.75*100)+(1.2*100)+(1.5*(unit-250));
    }
    cout<<money;
    return 0;
}
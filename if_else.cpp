// Write a C++ program to find maximum between three numbers.
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
    
// int main(){
//     int a;
//     int b;
//     int c;
//     cin>>a>>b>>c;
//     if (a>b && a>c){
//         cout<<a<<" is largest";
//     }else if(b>a && b>c){
//         cout<<b<<" is largest";
//     }else{
//         cout<<c<<" is largest";
//     }
//     return 0;
// }



// Write a C++ program to input a character from user and check whether given character is alphabet, digit or special character.
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
    
// int main(){
//     char ch;
//     cin>>ch;

//     if(ch>='a' && ch<='z' || ch>='A' && ch<='Z'){
//         cout<<ch<<" is alpha";
//     }else if( ch>='0' && ch<='9'){
//         cout<<ch<<" is digit";
//     }else{
//         cout<<ch<<" is special character";
//     }
//     return 0;
// }


// Write a C++ program to input amount from user and print minimum number of notes (Rs. 500, 100, 50, 20, 10, 5, 2, 1) required for the amount.
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
    
// int main(){
//     int amount;
//     cin>>amount;
//     int n500=0,n100=0,n50=0,n20=0,n10=0,n5=0,n2=0,n1=0;
//     if (amount>=500){
//         n500=amount/500;
//         amount-=n500*500;
//     }
//     if (amount>=100){
//         n100=amount/100;
//         amount-=n100*100;
//     }
//     if (amount>=50){
//         n50=amount/50;
//         amount-=n50*50;
//     }
//     if (amount>=20){
//         n20=amount/20;
//         amount-=n20*20;
//     }
//     if (amount>=10){
//         n10=amount/10;
//         amount-=n10*10;
//     }
//     if (amount>=5){
//         n5=amount/5;
//         amount-=n5*5;
//     }
//     if (amount>=2){
//         n2=amount/2;
//         amount-=n2*2;
//     }
//     if (amount>=1){
//         n1=amount;
//     }

//     cout<<"500 = "<<n500;
//     cout<<endl;
//     cout<<"100 = "<<n100;
//     cout<<endl;
//     cout<<"50 = "<<n50;
//     cout<<endl;
//     cout<<"20 = "<<n20;
//     cout<<endl;
//     cout<<"10 = "<<n10;
//     cout<<endl;
//     cout<<"5 = "<<n5;
//     cout<<endl;
//     cout<<"2 = "<<n2;
//     cout<<endl;
//     cout<<"1 = "<<n1;
//     cout<<endl;
//     return 0;
// }


// Write a C++ program to input sides of a triangle and check whether a triangle is equilateral, scalene or isosceles triangle.
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
    
// int main(){
//     int a,b,c;
//     cin>>a>>b>>c;

//     if(a==b && b==c){
//         cout<<"Equilateral";
//     }else if(a==b && a!=c || b==c && c!=a || a==c && a!=b){
//         cout<<"Isoceles";
//     }else{
//         cout<<"Scalene";
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

    if(unit<50){
        float res=unit*0.50;
        cout<<res;
    }
    else if(unit<150){
        float res=50*0.50+(unit-50)*0.75;
        cout<<res;
    }
    else if(unit<250){
        float res=50*0.50+100*0.75+(unit-150)*1.20;
        cout<<res;
    }
    else if(unit>250){
        float res=50*0.50 + 100*0.75 + 100*1.20 + (unit-250)*1.50;
        cout<<res;
    }
    return 0;
}
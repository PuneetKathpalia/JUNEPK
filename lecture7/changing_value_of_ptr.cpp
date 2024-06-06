// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
    
// int main(){
//     int a=10;
//     int *ptr_a=&a;
//     int *ptr_b=&a;
//     int *ptr_c;
//     ptr_c=&a;
//     ptr_c=ptr_b;


//     cout<<ptr_b<<endl;
//     // ptr_b++;
//     cout<<ptr_b<<endl;
//     cout<<*ptr_a<<" "<<*ptr_b<<" "<<*ptr_c<<endl;

//     cout<<ptr_b<<" "<<ptr_b+1;

//     return 0;
// }


// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
    
// int main(){
//     const int a=10;
//     // int *ptr_a = &a;
//     // To store the address of const int we required const int  
//     const int *ptr_a = &a;
//     const int *const ptr_b = &a;
//     //ptr_b++;
//     //cont int **ptrptr;//it will store the address of //cons int *ptr;
//     // a
//     // *ptr
//     // **ptr
//     // ***ptr
//     return 0;
// }


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int *ptr=new int;
    cout<<ptr<<endl;
    *ptr=10;
    cout<<*ptr;

    int *ptr2=new int(8);
    cout<<*ptr2;
    // delete ptr;
    delete ptr2;
    int *arr=new int (40);
    cout<<arr<<endl;//address
    arr[0]=10;
    arr[1]=20;


    cout<<arr[0]<<" "<<arr[1]<<endl;//value
    arr==ptr;
    cout<<*arr<<endl;//value


    // int *cons arr=new int (40);
    cout<<arr<<endl;//address
    arr[0]=10;
    arr[1]=20;
    cout<<arr[0]<<" "<<arr[1]<<endl;//value
    arr==ptr;
    cout<<*arr<<endl;//value


    return 0;
}
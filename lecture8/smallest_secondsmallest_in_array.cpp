// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
    
// int main(){
//     int siz;
//     cin>>siz;
//     //int arr[siz]//for stack
//     int * const arr=new int [siz];//for heap
//     for(int i=0;i<siz;i++){
//     cin>>arr[i];
//     // cin>>*(arr+i);//also we can use this as well.!
//     }
//     for(int i=0;i<siz;i++){
//     cout<<arr[i];
//     }

//     delete[] arr;//memory release array free 
//     return 0;
// }


// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
    
// int main(){
//     int siz;
//     cin>>siz;
//     //int arr[siz]//for stack
//     int * arr=new int [siz];//for heap
//     for(int i=0;i<siz;i++){
//     cin>>arr[i];
//     // cin>>*(arr+i);//also we can use this as well.!
//     }
//     arr++;
//     for(int i=0;i<siz;i++){
//     cout<<arr[i]<<" ";
//     }

//     // delete[] arr;
//     return 0;
// }

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
    
// int main(){
//     int siz;
//     cin>>siz;
//     int * const arr=new int [siz];
//     for(int i=0;i<siz;i++){
//     cin>>arr[i];
//     }
//     int first_min_ele=INT_MAX;
//     int second_min_ele=INT_MAX;
//     for(int i=0;i<siz;i++){
//     if(arr[i]<first_min_ele){
//     first_min_ele=arr[i];
//     }
//     }
//     for(int i=0;i<siz;i++){
//     if(arr[i]<second_min_ele && arr[i]>first_min_ele)  {
//     second_min_ele=arr[i];
//     }
//     }


//     cout<<"first"<<first_min_ele<<endl;
//     cout<<"second"<<second_min_ele<<endl;
//     delete[] arr;
//     return 0;
// }



// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
    
// int main(){
//     int siz;
//     cin>>siz;
//     int * const arr=new int [siz];
//     for(int i=0;i<siz;i++){
//     cin>>arr[i];
//     }
//     int first_min_ele=INT_MAX;
//     int second_min_ele=INT_MAX;

//     for(int i=0;i<siz;i++){
//         if(arr[i]<first_min_ele)
//         first_min_ele=arr[i];


//     }
//     return 0;
// }



// 
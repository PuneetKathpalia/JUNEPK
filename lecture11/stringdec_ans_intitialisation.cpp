// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
    
// int main(){
//     string city="Ayodhya";
//     string name("puneet");
//     string address;
//     address="delhi";


//     cout<<city<<endl;
//     cout<<name<<endl;
//     cout<<address<<endl;
//     cout<<name.size()<<endl;
//     cout<<name.substr()<<endl;

//     return 0;
// }

//taking input and accessing character 
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    string name;
    cin>>name;
    cout<<name;
    cout<<name[0];
    name[0]='f';

    int length_of_name=name.size();
    for(int i=0;i<length_of_name;i++){
        cout<<name[i]<<" ";
    }
    cout<<endl;

    // string full_name;
    // cin>>full_name;
    // //using cin we can take only upto space 
    // cout<<full_name;

    string para;
    getline(cin,para);
    //getline is used to read spaces and write in paragraph;
    cout<<para;
    cout<<int('a');

    //research for multiple lines what we have to use to print it ;




    return 0;
}
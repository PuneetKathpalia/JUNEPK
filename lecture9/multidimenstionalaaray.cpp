// marks of 120 student of 5 subject
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int student_marks[6][5];

// for(int student=0;student<6;student++){
//     for(int subj=0;subj<5;subj++){
//         cout<<"student is "<<student<<"and subject is "<<subj<<endl;
//     }
//     cout<<endl;
// }

//     for(int student=0;student<6;student++){
//     for(int subj=0;subj<5;subj++){
//     cout<<student_marks[student][subj]<<" ";
// }
//         cout<<endl;
//     }

// int stud_marks[6][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15}}
//     return 0;
// }
// marks of 120 student of 5 subject
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int student_marks[6][5] = {
    //     {1, 2, 3, 4, 5}, {6, 7, 8, 9, 10},{11,12,13, 14,15}};
 int student_marks[6][5] ;
    int count =1;
    for (int student = 0; student < 6; student++)
    {
        for (int subj = 0; subj < 5; subj++)
        {
        student_marks[student][subj]=count;
        count++;
        }
        cout << endl;
    }
    for (int student = 0; student < 6; student++)
    {
        for (int subj = 0; subj < 5; subj++)
        {
        cout<<student_marks[student][subj]<<" ";
        count++;
        }
        cout << endl;
    }


    //cin
    for (int student = 0; student < 6; student++)
    {
        for (int subj = 0; subj < 5; subj++)
        {
        cin>>student_marks[student][subj];
        count++;
        }
        cout << endl;
    }
    for (int student = 0; student < 6; student++)
    {
        for (int subj = 0; subj < 5; subj++)
        {
        cout<<student_marks[student][subj]<<" ";
        count++;
        }
        cout << endl;
    }
    return 0;
}
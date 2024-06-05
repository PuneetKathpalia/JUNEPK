#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int student_marks[6][5] = {
        {1, 2, 3, 4, 5}, {6, 7, 8, 9, 10},{11,12,13, 14,15}};
    //cin
    for (int student = 0; student < 6; student++)
    {
        for (int subj = 0; subj < 5; subj++)
        {
        cin>>student_marks[student][subj];
        }
    }
    
    for (int student = 0; student < 6; student++)
    {
        for (int subj = 0; subj < 5; subj++)
        {
        cout<<student_marks[student][subj]<<" ";
        }
    }
    return 0;
}
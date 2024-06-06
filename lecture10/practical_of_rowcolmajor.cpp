#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int ar[3][2];
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            cout<<&ar[i][j]<<" ";
        }
    }

    return 0;
}


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int *ptr=new int;//creating integer
    int **ptr=new int*;//creating pointer
    int *ptr=new int[10];//creating array of integer
    int **ptr=new int*[10];//creating array of pointer

    return 0;
}

// sorted array median
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[n];
        
    }
    if(n%2==1){
        cout<<arr[n/2];
    }
    else{
        double ans=(arr[n/2]+arr[(n+1)/2]);
        cout<<ans;
    }
    return 0;
}
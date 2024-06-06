#include<iostream>
#include<bits/stdc++.h>
using namespace std;
  
int main(){
  int n;
  cin>>n;
  int item;
  cin>>item;
  int arr[1000];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  arr[n]=item;
  n++;
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}
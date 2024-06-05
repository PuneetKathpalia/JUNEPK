#include<iostream>
#include<bits/stdc++.h>
using namespace std;
  
int main(){
  int n;
  cin>>n;
  int pos;
  cin>>pos;
  int item;
  cin>>item;
  int arr[1000];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }

  for(int i=n-1;i>=pos-1;i--){
    arr[i+1]=arr[i];
  }
  arr[pos-1]=item;
  n++;
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}
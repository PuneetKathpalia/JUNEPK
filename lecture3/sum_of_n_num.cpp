#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int n;
	cin>>n;
	int sum = n * (n + 1) / 2;
    cout<<"Sum of first "<<n<<" natural numbers is "<<sum<<endl;
    return 0;
}
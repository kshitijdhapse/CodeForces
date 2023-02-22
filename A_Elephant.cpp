#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int sum=0;
sum+=n/5;
int rem=n%5;
sum+=rem/4;
rem=rem%4;
sum+=rem/3;
rem=rem%3;
sum+=rem/2;
rem=rem%2;
sum+=rem/1;
rem=rem%1;
cout<<sum<<endl;
return 0;
}
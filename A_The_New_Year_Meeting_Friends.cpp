#include<bits/stdc++.h>
using namespace std;
int main(){
int t,a,b;
cin>>t>>a>>b;
int c=(t+a+b)/3;
cout<<abs(t-c)+abs(c-a)+abs(c-b)<<endl;
return 0;
}
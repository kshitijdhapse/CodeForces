#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
ll n;
cin>>n;
ll sum1=0;
while(n>=0){
    if(n%2021==0){
        cout<<"YES"<<endl;
        sum1=1;
        n=0;
    }
    n-=2020;
}

if(sum1==0){
    cout<<"NO"<<endl;
}
}
return 0;
}
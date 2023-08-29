#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    ll sum=0;
    while(n!=0){
        sum+=n;
        n=n/2;
    }
    cout<<sum<<endl;
}
return 0;
}
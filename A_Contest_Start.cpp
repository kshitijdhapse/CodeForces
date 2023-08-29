#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
ll n;
cin>>n;
ll t,x;
cin>>t>>x;
ll y=x/t;
if(y>n-1){
    y=n-1;
}
ll o=(y*(y+1));
ll p=(x/t)*(n-1-y);
// cout<<o<<" "<<p<<" "<<y<<endl;
ll ans=p+((o)/2);
cout<<ans<<endl;
}
return 0;
}
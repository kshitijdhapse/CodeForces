#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
    ll n,k;
    cin>>n>>k;
        ll x=log2(n+1);
        // cout<<x<<endl;
    ll ans=0;
    if(x>=k){
        ans+=pow(2,k);
        cout<<ans<<endl;
        continue;
    }
    while(1){
        ll x=log2(n+1);
        ans+=pow(2,x);
        // cout<<x<<" "<<ans<<" ";
        n-=pow(2,x);
        if(n<0){
            break;
        }
    }
    cout<<ans<<endl;
}
return 0;
}
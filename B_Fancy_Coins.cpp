#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    ll k,a1,ak;
    cin>>k>>a1>>ak;
    ll p=n;
    ll x=p/k;
    ll z=(n%k);
    ll ans=0;
    if(a1>=z){
        p-=z;
        a1-=z;
    }else{
        p-=z;
        ans+=z-a1;
        a1=0;
    }
    if(a1>=p){
        p=0;
    }else{
        ll y=a1/k;
        y*=k;
        if(p>y){
            p-=y;
        }else{
            p=0;
        }
    }
    // cout<<p<<" ";
    if(p%k!=0){
        ll o=(p%k);
        p-=o;
        ans+=o;
    }
    if(ak*k>=p){
        p=0;
    }else{
        p-=ak*k;
    }
    x=p/k;
    ans+=x;
    // cout<<x<<" "<<y<<" "<<z<<" ";
    cout<<ans<<endl;
}
return 0;
}
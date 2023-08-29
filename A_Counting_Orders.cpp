#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
ll mod=1e9+7;
int main(){
ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    ll a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    sort(a,a+n);
    sort(b,b+n);
    map<ll,ll> mp;
    ll j=0,sum=0;
    for(int i=0;i<n;i++){
        if(j<n){
        if(a[j]>b[i]){
            sum=(i+1)%mod;
            if(i==n-1&&j<n){
                mp[a[j++]]=sum;
            }
        }else{
            mp[a[j++]]=sum;
            i--;
        }}else{
            break;
        }
    }
    for(int i=j;j<n;j++){
        mp[a[j]]=sum;
    }
    sum=1,j=0;
    // for(auto x:mp){
    //     cout<<x.first<<" "<<x.second<<endl;
    // }
    for(auto x:mp){
        sum=(sum*((x.second-(j++))))%mod;
    }
    cout<<sum%mod<<endl;
}
return 0;
}
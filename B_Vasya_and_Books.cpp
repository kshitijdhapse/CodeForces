#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
    ll n;
    cin>>n;
    ll arr[n];
    map<ll,ll> mp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]=i;
    }
    ll count=0,prev=0,stat=0;
    for(int i=0;i<n;i++){
        ll a;
        cin>>a;
        ll k=mp[a];
        count=0;
        stat=0;
        if(mp[a]!=-1){
        for(int i=prev;i<=k;i++){
            mp[arr[i]]=-1;
            if(stat==0){
            prev=i;
            stat=1;
            }
        }
        count+=k-prev+1;
        }
        cout<<count<<" ";
    }
return 0;
}
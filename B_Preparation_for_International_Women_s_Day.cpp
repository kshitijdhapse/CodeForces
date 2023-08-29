#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){

    ll n,k;
    cin>>n>>k;
    ll arr[n];
    map<ll,ll> mp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        arr[i]=arr[i]%k;
        mp[arr[i]]++;
    }
    ll count=0;
    for(auto x:mp){
        if(mp[(k-x.first)%k]!=0&&x.second!=0){
            if((k-x.first)%k==x.first){
                count+=x.second/2;
                mp[x.first]=0;
            }else{
                count+=min(x.second,mp[(k-x.first)%k]);
                mp[x.first]=0;
                mp[(k-x.first)%k]=0;
            }
        }
        // cout<<x.first<<" "<<x.second<<endl;
    }
    cout<<2*count<<endl;
return 0;
}
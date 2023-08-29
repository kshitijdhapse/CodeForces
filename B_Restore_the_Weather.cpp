#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
    ll n,k;
    cin>>n>>k;
    ll arr[n],b[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    map<ll,ll> mp;
    vector<pair<ll,ll>> v;
    for(int i=0;i<n;i++){
        pair<ll,ll> a;
        a.first=arr[i];
        a.second=i;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    sort(b,b+n);
    int ans[n];
    for(int i=0;i<n;i++){
        ans[v[i].second]=b[i];
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
return 0;
}
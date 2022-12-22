#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
ll n;
cin>>n;
ll arr[n];
unordered_map<ll,ll> mp;
for(int i=0;i<n;i++){
    cin>>arr[i];
    mp[arr[i]]++;
}
vector <pair<ll,ll>> v;
for(auto x:mp){
    v.push_back(x);
}
sort(v.begin(),v.end());
if(v.size()!=1){
    ll a=v[v.size()-1].second*v[0].second*2;
    cout<<a<<endl;
}
else{
    ll a=(n)*(n-1);
    cout<<(a)<<endl;
}
}
return 0;
}
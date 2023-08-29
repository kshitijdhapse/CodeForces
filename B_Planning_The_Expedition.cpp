#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll n,m;
cin>>m>>n;
ll arr[n];
map<ll,ll> mp;
for(int i=0;i<n;i++){
    cin>>arr[i];
    mp[arr[i]]++;
}
int i=0;
priority_queue<pair<ll,ll>> v;
for(auto x:mp){
    // swap(x.first(),x.second());
    cout<<x.first<<" "<<x.second<<endl;
    pair<ll,ll> a;
    a.first=x.second;
    a.second=x.first;
    v.push(a);
    i++;
}
    pair<ll,ll> a;
    a=v.top();

ll p=n/a.first;
ll sum=INT_MAX;
if(p>0){
for(int i=0;i<m;i++){
    pair<ll,ll> a;
    a=v.top();
    if(a.first>=p)
        a.first-=p;
    v.pop();
    v.push(a);
}
    cout<<p<<endl;

}else{
    cout<<0<<endl;
}
return 0;
}
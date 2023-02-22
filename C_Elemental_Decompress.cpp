
#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
int n;
cin>>n;
ll arr[n];
map<ll,ll> mp;
vector<ll> v1;
vector<ll> v2;
vector<pair<ll,ll>> v;
map<ll,ll> mp1;
for(int i=1;i<=n;i++){
    mp1[i]+=2;
}
for(int i=0;i<n;i++){
    cin>>arr[i];
    pair<int,int> x;
    x.first=arr[i];
    x.second=0;
    v.push_back(x);
    mp[arr[i]]++;
    mp1[arr[i]]--;
}
vector<pair<ll,ll>> f;
for(auto x:mp1){
    //cout<<x.first<<" "<<x.second<<endl;
    f.push_back(x);
}
cout<<endl;
sort(v.begin(),v.end());
for(int i=0;i<n;i++){
    if(mp[arr[i]]==1){
        v1.push_back(arr[i]);
        v2.push_back(arr[i]);
        v[i].second=arr[i];
    }
    else{
        int p=0;
        while(p<f.size()){
            if(f[p].first<arr[i]&&f[p].second>=2){
                v[i].second=f[p].first;
                i++;
                v[i].second=f[p].first;
                swap(v[i].first,v[i].second);
                f[p].second=0;
            }
            else{
                p++;
            }
        }
    }
}
for(int i=0;i<n;i++){
    cout<<v[i].first<<" ";
}
cout<<endl;
for(int i=0;i<n;i++){
    cout<<v[i].second<<" ";
}
cout<<endl;
}
return 0;
}
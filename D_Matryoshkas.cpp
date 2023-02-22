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
map<ll,ll> mp;
for(int i=0;i<n;i++){
    cin>>arr[i];
    mp[arr[i]]++;
}
sort(arr,arr+n);
ll x=0;
vector<pair<ll,ll>> v;
for(auto y:mp){ 
        //cout<<y.first<<' '<<y.second<<endl;
        v.push_back(y);
        //x=max(x,y.second);
}
ll m=v.size(),diff=0,p=0,count=0;
for(int i=0;i<m-1;i++){
    p=max(p,v[i].second);
    if(v[i+1].first-v[i].first==1){
        if(v[i+1].second<v[i].second){
            diff+=abs(v[i+1].second-v[i].second);
        }
        else{
            count+=diff;
            diff=0;
        }
        if(i==m-2){
            count+=p;
            p=0;    
        }
    }
    else{
        count+=p;
        
        if(i==m-2){
            p=max(p,v[m-1].second);
            count+=p;
        }
        p=0;
    }
}
if(mp.size()==1){
    count=v[0].second;
}
cout<<count<<endl;
}
return 0;
}
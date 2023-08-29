#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    ll arr[(n*(n-1))/2];
    map<ll,ll> mp;
    for(int i=0;i<(n*(n-1))/2;i++){
        cin>>arr[i];
        mp[arr[i]]++;
    }
    vector<pair<ll,ll>> v;
    for(auto x:mp){
        // swap(x.first,x.second);
        // pair<ll,ll> a=make_pair(x.second,x.first);
        v.push_back(x);
        
        // cout<<x.first<<" "<<x.second<<endl;
    }
    int count=1;
    int j=0;
    for(int i=0;i<v.size();i++){
            while(v[i].second!=0){
                v[i].second-=n-j-1;
                j++;
                cout<<v[i].first<<" ";    
            }
            
    }
    cout<<v[v.size()-1].first<<' ';
    cout<<endl;
}
return 0;
}
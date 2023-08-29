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
    ll m=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        m=max(arr[i],m);
        mp[arr[i]]++;
    }
    sort(arr,arr+n);
    vector<pair<ll,ll>> v;
    for(auto x:mp){
        v.push_back(x);
        // cout<<x.first<<" "<<x.second<<endl;
    }
    int stat=0;
    for(int i=0;i<m;i++){
        if(mp[i]<mp[i+1]){
            cout<<"NO"<<endl;
            stat=1;
            break;
        }
    }
    // sort(v.begin(),v.end());
    // for(int i=0;i<v.size()-1;i++){
    //     if(v[i].second<=v[i+1].second){
    //         cout<<"NO"<<endl;
    //         stat=1;
    //         break;
    //     }
    // }
    if(stat==0){
        cout<<"YES"<<endl;
    }
}
return 0;
}
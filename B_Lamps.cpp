#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    ll a,b;
    map<ll,ll> mp;
    ll m=0;
    vector<pair<ll,ll>> v;
    for(int i=0;i<n;i++){
        pair<ll,ll> a;
        cin>>a.second>>a.first;
        m=max(m,a.second);
        mp[a.second]++;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    ll sum=0,count=0;
    for(int i=1;i<=m;i++){
        if(mp[i]==0){
            count++;
            // if(mp[i+1]>=count){
            //     mp[i+1]=count;
            // }else{
                
            // }
        }
        // else{
        //     if(mp[i+1]!=0){
        //         mp[i+1]=1;
        //     }
        // }
    }
    // for(auto x:mp){
    //     cout<<x.first<<" "<<x.second<<endl;
    // }
    // for(auto x:v){
    //     sum+=x.second;
    //     cout<<x.first<<" "<<x.second<<endl;
    // }
    cout<<count<<" "<<mp.size()<<endl;
    vector<pair<ll,ll>> v1;ll c=0,j=count+mp.size();
    for(int i=v.size()-1;i>=0;i--){
        // if(mp[v[i].second]!=0){
        //     mp[v[i].second]--;
        //     v1.push_back(v[i]);
        // }
        if(j!=0&&c<v[i].second){
            sum+=v[i].first;
            j--;
            c++;
        }
        
    }
    // for(auto x:v1){
    //     cout<<x.first<<" "<<x.second<<endl;
    // }
    cout<<sum<<endl;
}
return 0;
}
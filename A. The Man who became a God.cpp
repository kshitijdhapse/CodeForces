#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
    ll n,k;
    cin>>n>>k;
    ll arr[n];
    
    vector<ll> o;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(i>=1){
            o.push_back(abs(arr[i-1]-arr[i]));
        }
    }
    if(k>=n){
        cout<<0<<endl;
        continue;
    }
    ll m=0,q=0,in1,in2,dif;
    vector<ll> v;
    for(int i=0;i<n-1;i++){
        ll dif=abs(arr[i+1]-arr[i]);
        v.push_back(dif);
    }
    sort(v.begin(),v.end());
    
    ll ans=0;
    for(int i=0;i<n-k;i++){
        ans+=v[i];
    }
    cout<<ans<<endl;
}
return 0;
}
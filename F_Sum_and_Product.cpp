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
    map<long double,ll> mp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]++;
    }
    ll m;
    cin>>m;
    for(int i=0;i<m;i++){
        ll count=0;
        ll a,b;
        cin>>a>>b;
        for(int i=0;i<n;i++){
            long double y=(a+pow(((a*a)-(4*b)),0.5))/2;
            // cout<<y<<endl;
            long double o=b/y;
            long double x=(a-pow(((a*a)-(4*b)),0.5))/2;
            long double p=b/x;
            // cout<<x<<" "<<p<<" "<<y<<" "<<o<<" "<<endl;
            if(mp[y]!=0&&mp[o]!=0){
                mp[y]++;
                mp[o]++;
                count++;
            }
            if(mp[x]!=0&&mp[p]!=0){
                mp[x]++;
                mp[p]++;
                count++;
            }
        }
        cout<<count<<" ";
    }
    cout<<endl;
}
return 0;
}
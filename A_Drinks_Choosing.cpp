#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
    ll n,k,x;
    cin>>n>>k;
    ll c=n/2+(n%2);
    ll p=c;
    map<int,int> mp;
    for(int i=0;i<n;i++){
        int a;cin>>a;
        if(a<=k){
        mp[a]++;
        }
    }
    ll count=0,ans=0,stat=0;
    for(auto x:mp){
        ans+=2*int((x.second)/2);
        mp[x.first]=x.second%2;
        if(ans>=2*c){
            break;
        }
    }   
    ll y=ans;
    for(auto x:mp){
        // cout<<x.first<<" "<<x.second<<endl;
        ans+=x.second;
        y+=2*x.second;
        if(y>2*c){
            break;
        }
        
    }
// p=min(p,count);
if(stat==0)
    cout<<ans<<endl;

return 0;
}
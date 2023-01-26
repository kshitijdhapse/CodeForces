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
for(ll i=0;i<n;i++){
    cin>>arr[i];
}
sort(arr,arr+n);
ll a,b,stat=0,min1=INT_MAX,in;
for(ll i=n-1;i>0;i--){
    if(arr[i]-arr[i-1]<min1){
        min1=arr[i]-arr[i-1];
        a=arr[i];
        b=arr[i-1];
        in=i;
    }
}
//cout<<a<<" "<<b<<endl;
vector<ll> v;
for(ll i=0;i<n;i++){
    if((a!=arr[i]&&b!=arr[i])||stat>=2){
        v.push_back(arr[i]);
    }
    else{
        stat++;
    }
}
sort(v.begin(),v.end());
cout<<b<<" ";
ll x=v.size();
// for(ll i=0;i<x;i++){
//     cout<<v[i]<<" ";
// }
//cout<<endl;
for(ll i=in-1;i<x;i++){
    cout<<v[i]<<" ";
}
for(int i=0;i<in-1;i++){
    cout<<v[i]<<" ";
}
cout<<a<<endl;

//cout<<a<<" ";
}
return 0;
}
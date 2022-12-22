#define ll long long int
#include<bits/stdc++.h>
using namespace std;
int main(){

ll n;
cin>>n;
ll arr[n];
ll a,x;
cin>>a>>x;
for(ll i=0;i<n;i++){
    cin>>arr[i];
}
sort(arr,arr+n);
ll count=1;
vector<ll> z;
for(ll i=0;i<n-1;i++){
    if(arr[i+1]-arr[i]>x){
        z.push_back(arr[i+1]-arr[i]);
        count++;
    }
}
sort(z.begin(),z.end());
ll i=0;
for(ll i=0;i<z.size();i++){
    //cout<<z[i]<<" ";
    ll f;
    if(z[i]%x==0){
        f=(z[i]/x)-1;
    }
    else{
        f=z[i]/x;
    }
    if(a-f>=0){
    a-=f;
    count--;
    }
}
cout<<count<<endl;
return 0;
}
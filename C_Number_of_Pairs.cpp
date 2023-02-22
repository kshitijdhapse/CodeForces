#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
ll n,l,r;
cin>>n>>l>>r;
ll arr[n];
ll x=0,y=0;
        if(n==1){
            cout<<0<<endl;
            continue;
        }
map<int,int> mp;
for(int i=0;i<n;i++){
    cin>>arr[i];
    mp[arr[i]]++;
    if(arr[i]<r){
        x=max(x,arr[i]);
    }
}
vector<pair<int,int>> v;
for(auto x:mp){
v.push_back(x);
}
// for(int i=0;i<v.size();i++){
//     cout<<v[i].first<<" "<<v[i].second<<endl;
// }
ll in3;
sort(arr,arr+n);
for(int i=0;i<n;i++){
    if(x+arr[i]<=r&&x+arr[i]>=l){
        y=arr[i];
        break;
    }
}
//cout<<x<<" "<<y<<endl;

ll in;
ll high=v.size()-1,low=0,mid;
while(high>=low){
    mid=(high+low)/2;
    if(v[mid].first>x){
        high=mid-1;
    }
    else if(v[mid].first<x){
        low=mid+1;
    }
    else{
        in=mid;
        break;
    }
    if(high==low){
        in=high;
        break;
    }
}
ll in2;
high=v.size()-1,low=0,mid;
while(high>=low){
    mid=(high+low)/2;
    if(v[mid].first>y){
        high=mid-1;
    }
    else if(v[mid].first<y){
        low=mid+1;
    }
    else{
        in2=mid;
        break;
    }
    if(high==low){
        in2=high;
        break;
    }
}
ll count=0;
cout<<in<<" "<<in2<<endl;
for(int i=in2;i<=in-1;i++){
    for(int j=i+1;j<=in;j++){
        if(v[i].first+v[j].first>=l&&v[i].first+v[j].first<=r){
            ll o=v[i].second*v[j].second;
            count+=(o);
        }
    }
    if(2*v[i].first>=l&&2*v[i].first<=r){
        ll o=((v[i].second)*(v[i].second-1))/2;
            count+=o;
        }
}
int i=in;
if(2*v[i].first>=l&&2*v[i].first<=r){
        ll o=((v[i].second)*(v[i].second-1))/2;
            count+=o;
        }
cout<<count<<endl;
}
return 0;
}
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
for(int i=0;i<n;i++){
    cin>>arr[i];
}
map<ll,ll> mp;
// for(int i=0;i<n;i++){
//     for(int j=0;j<n-i;j++){
//         ll sum=0;
//         int len = i + j - 1;
//         cout<<endl;
//         mp[sum]++;
//     }
//     //cout<<endl;
// }
map<ll,ll> meow;
ll d;
for(int i=0;i<n;i++){
    ll sum=0;
    meow[arr[i]]++;
    for(int j=i;j<n;j++){
        sum+=arr[j];
        mp[sum]++;
    }
}
ll max1=0;
for(auto x:mp){
    cout<<x.first<<" "<<x.second<<endl;
    if(meow[x.first]!=x.second||meow[x.first]==n){
    if(max1<x.second){
    max1=max(max1,x.second);
    d=x.first;
    }
    }
}
int index=0;
cout<<d<<" "<<max1<<endl;
for(int i=0;i<n;i++){
    ll sum=0;
    //meow[arr[i]]++;
    for(int j=i;j<n;j++){
        
        sum+=arr[j];
        if(sum==d){
            index=max(index,j-i+1);
        }
        mp[sum]++;
    }
}
// if(n%max1!=0){
//     cout<<(n/max1)+1<<endl;
// }
// else{
// cout<<(n+1)/max1<<endl;
// }
cout<<index<<endl;
//cout<<endl;
}
return 0;
}
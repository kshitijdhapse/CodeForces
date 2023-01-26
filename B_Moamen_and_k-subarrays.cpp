#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
ll n;
cin>>n;
ll k;
cin>>k;
ll arr[n];
map <ll,ll> mp;
for(int i=0;i<n;i++){
    cin>>arr[i];
    mp[arr[i]]=i;
}
sort(arr,arr+n);
ll sum=0;
for(int i=0;i<n-1;i++){
    if(mp[arr[i+1]]-mp[arr[i]]!=1){
        sum++;
    }
}
if(sum+1<=k){
    cout<<"Yes"<<endl;
}
else{
    cout<<"No"<<endl;
}
}
return 0;
}
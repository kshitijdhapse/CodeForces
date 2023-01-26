#define ll long long int
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
ll n;
cin>>n; 
ll arr[n+1];
for(ll i=1;i<=n;i++){
    cin>>arr[i];
}
ll count=0;
for(ll i=1;i<=n;i++){
    int o=arr[i]-(i%arr[i]);
    for(int j=o;j<=n;j+=arr[i]){
        ll x=arr[i]*arr[j];
        if(i+j==x&&i<j){
            count++;
        }
    }
}
cout<<count<<endl;
}   
return 0;
}
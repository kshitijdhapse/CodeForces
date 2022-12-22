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
ll a=0,b=INT_MAX;
for(ll i=0;i<n;i++){
    cin>>arr[i];
    a=max(a,arr[i]);
    b=min(b,arr[i]);
}
sort(arr,arr+n);
ll x=arr[0],y=arr[0],z=0;
//for(ll j=1;j<n;j++){
    for(ll i=0;i<n;i++){
        x=(x|arr[i]);
        y=(y&arr[i]);
    }
//}
// for(int i=0;i<n;i++){
//     cout<<arr[i]<<endl;
// }
cout<<x-y<<endl;
}
return 0;
}
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
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }
     sort(arr,arr+n);
     ll sum=0;
     for(int i=0;i<(n)/2;i++){
        sum+=arr[n-i-1]-arr[i];
     }
     cout<<sum<<endl;
}
return 0;
}
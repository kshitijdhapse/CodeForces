#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
    ll n,k;
    cin>>n>>k;
    ll arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ll ans=0;
    for(int i=0;i<n;i++){
        if(arr[i]>=i-k&&arr[i]<=i+k){
            continue;
        }
        else{
            
        }
    }
}
return 0;
}
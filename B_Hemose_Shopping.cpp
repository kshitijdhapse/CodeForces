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
    ll x[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        x[i]=arr[i];
    }
    sort(arr,arr+n);
    ll b=0;
    for(int i=0;i<n;i++){
        if(arr[i]==x[i]){
            b++;
        }
    }
    ll stat=0;
    if(b==n){
        cout<<"YES"<<endl;
        continue;
    }
    // cout<<n/2<<endl;
    if(k<n){
    for(ll i=n-k-1;i<k;i++){
        if(arr[i]!=x[i]){
            cout<<"NO"<<endl;
            stat=1;
            break;
        }
    }
    // cout<<count<<endl;
    if(stat==0){
        cout<<"YES"<<endl;
    }
    }
}
return 0;
}
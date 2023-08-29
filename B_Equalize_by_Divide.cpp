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
    priority_queue<pair<ll,ll>> pq;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        // pair<ll,ll> p;
        // p.first=arr[i];
        // p.second=i+1;
        // pq.push()
    }
    sort(arr,arr+n);
    ll m=arr[0];
    for(int i=n-1;i>=0;i--){
        if(m!=arr[i]){
            while(m!=arr[i]&&m<arr[i]){
                if(arr[i]%m==0){
                    arr[i]=arr[i]/m;
                }else{
                    arr[i]=
                }
            }
        }
    }
}
return 0;
}
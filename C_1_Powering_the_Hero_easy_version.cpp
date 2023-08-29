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
for(ll i=0;i<n;i++){
    cin>>arr[i];
}
// sort(arr,arr+n);
ll y=0,x=0,in=n-1;
priority_queue<ll> pq;
for(ll i=0;i<n;i++){
    pq.push(arr[i]);
    if(arr[i]==0){
        x+=pq.top();
        pq.pop();
        // pq = priority_queue <int>(); 
    }
}
cout<<x<<endl;
}
return 0;
}
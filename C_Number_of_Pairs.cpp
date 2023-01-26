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
for(int i=0;i<n;i++){
    cin>>arr[i];
}
sort(arr,arr+n);
int in=n;
for(int i=0;i<n;i++){
    if(arr[i]>=r){
        in=i;
    }
}
ll count=0;
for(int i=0;i<in;i++){
    for(int j=i+1;j<in;j++){
        if(arr[i]+arr[j]>=l&&arr[i]+arr[j]<=r){
            count++;
        }
    }
}
cout<<count<<endl;
}
return 0;
}
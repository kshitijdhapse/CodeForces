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
// sort(arr,arr+n);
ll sum=0;
for(int i=0;i<n-1;i++){
    // for(int j=i+1;j<n;j++){
        // cout<<(arr[i]^arr[j])<<" ";
        sum+=(arr[i]^arr[i+1])*(pow(2,n-i));
        // cout<<sum<<" ";
    // }
}
cout<<sum<<endl;
}
return 0;
}
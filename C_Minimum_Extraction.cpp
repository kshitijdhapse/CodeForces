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
ll sum=0,dif=0;
for(int i=0;i<n;i++){
    cin>>arr[i];
    if(arr[i]>0){
        sum+=arr[i];
    }
    else{
        dif+=arr[i];
    }
}
sort(arr,arr+n);
ll o=0;
if(n>1){
for(int i=0;i<n-1;i++){
    o=max(o,arr[i+1]-arr[i]);
}
cout<<max(o,arr[0])<<endl;
}
else{
    cout<<arr[0]<<endl;
}
}
return 0;
}
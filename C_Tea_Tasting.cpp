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
ll arr1[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
for(int i=0;i<n;i++){
    cin>>arr1[i];
}

vector<pair<ll,ll>> v;
for(int i=0;i<n;i++){
    if(arr[i]>(i+1)*arr1[i]){
        arr[i+1]+=arr[i]-((i+1)*arr1[i]);
        cout<<arr1[i]<<" ";
    }else{
        cout<<arr[i]<<" ";
        arr[i]=0;
    }
}
cout<<endl;
}
return 0;
}
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
    arr1[i]=arr[i];
}
sort(arr1,arr1+n);
for(int i=0;i<n;i++){
    if(arr[i]!=arr1[n-1]){
        cout<<arr[i]-arr1[n-1]<<" ";
    }
    else{
        cout<<arr1[n-1]-arr1[n-2]<<" ";
    }
    
}
cout<<endl;
}
return 0;
}
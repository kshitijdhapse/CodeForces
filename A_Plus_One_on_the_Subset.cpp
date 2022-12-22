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
int max=0,min=INT_MAX;
for(int i=0;i<n;i++){
    cin>>arr[i];
    if(max<arr[i]){
        max=arr[i];
    }
    if(min>arr[i]){
        min=arr[i];
    }
}
cout<<max-min<<endl;
}
return 0;
}
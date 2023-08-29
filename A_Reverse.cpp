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
int x=-1,stat=0,mx=INT_MAX;
for(int i=0;i<n;i++){
    if(arr[i]-i-1!=0){
        if(mx>arr[i]){
            mx=arr[i];
            x=i;
        }
    }
}
// cout<<x<<" "<<mx<<endl;
if(x!=-1&&mx!=INT_MAX){
reverse(arr+mx-1,arr+x+1);
}
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
}
return 0;
}
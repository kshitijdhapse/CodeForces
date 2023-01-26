#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
ll n,m;
cin>>n>>m;
ll arr[n];
ll x[n];
ll sum=0;
map <int,int> mp;
for(int i=0;i<n;i++){
    cin>>arr[i];
    mp[arr[i]]=i;
    x[i]=arr[i];
}
//sort(arr,arr+n);
ll wins=0;
// for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//         if()
//     }
// }
// for(int i=n;i>=0;i--){
//     sum+=arr[i];
//     if(m<sum){
//         wins=i;
//         break;
//     }
//     else{
//         wins=i+1;
//     }
// }
for(int i=0;i<n;i++){
    if(arr[i]==arr[i+1]){
        cout<<"";
    }
    else{
    sum+=arr[i];
    if(m<sum){
        wins=i;
        break;
    }
    else{
        wins=i+1;
    }
    }
}
cout<<wins<<endl;
}
return 0;
}
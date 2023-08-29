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
int stat=0;
sort(arr,arr+n);
if(arr[0]!=1){
    cout<<"NO"<<endl;
}else{
    ll sum=arr[0];
    for(int i=1;i<n;i++){
        if(sum>=arr[i]){
            sum+=arr[i];
            // continue;
        }else{
            stat=1;
            cout<<"NO"<<endl;
            break;
        }
    }
    if(stat==0)
        cout<<"YES"<<endl;
}
}
return 0;
}
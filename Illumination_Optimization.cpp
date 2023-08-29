#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
ll c=1;
while(t--){
    ll m,r,n;
    cin>>m>>r>>n;
    ll arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(arr[0]>r||m-arr[n-1]>r){
            cout<<"Case #"<<c<<": "<<"IMPOSSIBLE"<<endl;
            continue;
    }
    ll stat=0,count=0;
    for(int i=0;i<n;i++){
        if(arr[i+1]-arr[i]>2*r&&i!=n-1){
            stat=1;
            break;
        }else{
            if(i==n-1){
                if(arr[i])
            }
            else{
            if(arr[i]+r>arr[i+1]){
                count++;
            }else{
                count++;
            }
            }
        }
    }
    if(arr[n-2]+r<m){
        count++;
    }
    if(stat==0){
            cout<<"Case #"<<c<<": "<<count<<endl;
    }else{
            cout<<"Case #"<<c<<": "<<"IMPOSSIBLE"<<endl;
    }
    c++;
}
return 0;
}
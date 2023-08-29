#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
    ll n,k;
    cin>>n>>k;
    ll arr[n];
    map<ll,ll> mp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]++;
    }
    int curr=arr[0],cnt=0,in,stat=0,stat1=0;
    for(int i=0;i<n;i++){
        if(arr[i]==curr){
            cnt++;
        }
        if(cnt==k){
            stat=1;
            in=i;
            break;
        }
    }
    curr=arr[n-1],cnt=0;
    for(int i=n-1;i>in;i--){
        if(arr[i]==curr){
            cnt++;
        }
        if(cnt==k){
            stat1=1;
            in=i;
            break;
        }
    }
    if(arr[0]==arr[n-1]&&stat==1){
        cout<<"YES"<<endl;
    }else if(stat==1&&stat1==1){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
return 0;
}
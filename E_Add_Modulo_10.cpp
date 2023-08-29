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
    ll x=0;
    map<ll,ll> mp;
    priority_queue<ll> pq;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]++;
        pq.push(arr[i]);
        x=max(arr[i],x);
    }
    if(mp[arr[0]]==n){
        cout<<"Yes"<<endl;
    }else{
        ll stat=0;
        for(int i=0;i<n;i++){
            while(arr[i]<x){
            if(arr[i]%10!=0){
                mp[arr[i]]--;
                arr[i]=arr[i]+(arr[i]%10);
                mp[arr[i]]++;
                if(mp[arr[i]]==n){
                    cout<<"Yes"<<endl;
                    stat=1;
                    break;
                }
            }
            else{
                x=arr[i];
            }
            }
            
        }
        if(mp[arr[0]]==n){
                    cout<<"Yes"<<endl;
                    stat=1;
        }
        if(stat==0){
            cout<<"No"<<endl;
        }
    }

}
return 0;
}
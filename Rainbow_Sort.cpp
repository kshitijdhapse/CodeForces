#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
ll c=0;
while(t--){
    ll n;
    cin>>n;
    c++;
    ll arr[n];
    ll stat=0;
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(mp[arr[i]]==0||arr[i-1]==arr[i]){
            mp[arr[i]]++;
        }else{
            cout<<"Case #"<<c<<": "<<"IMPOSSIBLE"<<endl;
            stat=1;
            break;
        }
    }
    if(stat==0){
        cout<<"Case #"<<c<<": ";
        ll x=-1;
        for(int i=0;i<n;i++){
            if(x!=arr[i]){
                cout<<arr[i]<<' ';
            }
         x=arr[i];
        }
        cout<<endl;
    }

}
return 0;
}
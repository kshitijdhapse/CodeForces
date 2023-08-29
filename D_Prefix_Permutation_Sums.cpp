#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    ll arr[n-1];
    ll m=0;
    int stat=0,cnt=0;
    map<ll,ll> mp;
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    if(arr[n-2]!=(n*(n+1))/2){
        mp[(n*(n+1))/2-arr[n-2]]++;
    }
    if(stat==0){
        mp[arr[0]]++;
        for(int i=0;i<n-2;i++){
            mp[arr[i+1]-arr[i]]++;
        }
        for(auto x:mp){
            if((x.first>n||x.second==2)&&cnt==0){
                // cout<<x.first<<endl;
                for(int j=1;j<=n;j++){
                    if(mp[j]==0&&mp[x.first-j]==0&&j!=x.first-j){
                        cnt++;
                        mp[x.first]--;
                        mp[j]++;
                        mp[x.first-j]++;
                        break;
                    }
                }
                if(cnt==0){
                    cnt=1;
                    stat=-1;
                    break;
                }
            }
            else if((x.second>=2||x.first>n)&&cnt==1){
                stat=-1;
                break;
            }
        }
    }
    for(int i=1;i<=n;i++){
        // cout<<i<<" "<<mp[i]<<endl;
        if(mp[i]==1){

        }else{
            stat=-1;
        }
    }
    if(stat==-1){
        cout<<"NO"<<endl;
    }else if(stat==0){
        cout<<"YES"<<endl;
    }
}
return 0;
}
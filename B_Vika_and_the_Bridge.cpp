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
    ll v[2][k];
    map <ll,ll [3]> mp;
    for(int i=1;i<=k;i++){
        mp[i][0]=-1;
    }
    for(int i=0;i<n;i++){
        cin>>arr[i];
        // if(mp[arr[i]][0]==0&&stat==0){
        //     if(mp[arr[i]][1]<=i-mp[arr[i]][0]){
        //         mp[arr[i]][2]=mp[arr[i]][1];
        //         cout<<i-mp[arr[i]][0]<<' '<<mp[arr[i]][1]<<endl;
        //         mp[arr[i]][1]=max(i-mp[arr[i]][0],mp[arr[i]][1]);
        //     }
            
        // }else{
            if(mp[arr[i]][1]<=i-mp[arr[i]][0]-1){
                mp[arr[i]][2]=mp[arr[i]][1];
                // cout<<i-mp[arr[i]][0]-1<<' '<<mp[arr[i]][1]<<endl;
                mp[arr[i]][1]=max(i-mp[arr[i]][0]-1,mp[arr[i]][1]);
            // }
            }else{
                if(mp[arr[i]][2]<=i-mp[arr[i]][0]-1){
                mp[arr[i]][2]=i-mp[arr[i]][0]-1;
                }
            }
        mp[arr[i]][0]=i;
    }
    for(int i=0;i<k;i++){
         if(mp[i+1][1]<=n-mp[i+1][0]-1){
                mp[i+1][2]=mp[i+1][1];
                mp[i+1][1]=max(n-mp[i+1][0]-1,mp[i+1][1]);
            }else {
                if(mp[i+1][2]<=n-mp[i+1][0]-1){
                    mp[i+1][2]=n-mp[i+1][0]-1;
                }
            }
            mp[i+1][0]=n;
    }
    ll m=INT_MAX;
    for(auto x:mp){
        // cout<<x.first<<" "<<x.second[0]<<" "<<x.second[1]<<" "<<x.second[2]<<endl;
        m=min(m,max(x.second[2],x.second[1]/2));
    }
    
    // ll last=-1; 
    // for(int i=0;i<k;i++){
    //     last=-1;
    //     priority_queue<ll> pq;
    //     for(int j=0;j<n;j++){
    //         if(arr[j]==arr[i]){
    //             pq.push(j-last-1);
    //             last=j;
    //         }else{
    //             if(j==n-1){
    //                 pq.push(j-last);
    //                 last=j;
    //             }
    //         }
    //     }
    //     ll h=pq.top()/2;
    //     // cout<<pq.top()<<" ";
    //     pq.pop();
    //     // cout<<pq.top()<<" ";

    //     pq.push(h);
        
    // m=min(pq.top(),m);
    // }
    cout<<m<<endl;
}
return 0;
}
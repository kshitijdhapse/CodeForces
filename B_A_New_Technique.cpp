#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
    ll n,m;
    cin>>n>>m;
    ll a[n][m];
    ll b[m][n];
    map<ll,ll> mp;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){     
            cin>>a[i][j];
            if(j==0){
                mp[a[i][j]]=i;
            }
        }
    }
    // for(auto x:mp){
    //     cout<<x.first<<' '<<x.second<<endl;
    // }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>b[i][j];
        }
    }
    // for(int i=0;i<m;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<b[i][j]<<" ";
    //     }
    // }

for(int i=0;i<n;i++){
    int stat=0;
    for(int j=0;j<n;j++){
        for(int k=0;k<m;k++){
            if(a[j][k]==b[0][i]){
                stat=1;
            }
        }
        if(stat==1){
            for(int k=0;k<m;k++){
                cout<<a[j][k]<<" ";
            }
            cout<<endl;
            break;
        }
    }
}
}
return 0;
}
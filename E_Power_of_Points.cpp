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
    ll p=0;
    ll ax[n];
    ll sum[n+1];
    sum[0]=0;
    ll q=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        p+=arr[i];
        ax[i]=arr[i];
    }

    map<ll,ll> mp;
    sort(ax,ax+n);
    for(int i=0;i<n;i++){
        q+=ax[i];
        sum[i+1]=q;
    }
    // for(int i=0;i<n;i++){
    //     mp[ax[i]]=i;
    // }
    // cout<<sum[n]<<endl;
    for(int i=0;i<n;i++){
        // cout<<i+1<<" "<<sum[i+1]<<" "<<ax[i]<<" ";
        ll b=(n-i)*ax[i];
        ll ans=sum[n]-sum[i]-(b);
        // cout<<ans<<" ";
        ll a=ax[i]*(i+1);
        ans+=(a)-sum[i+1];
        mp[ax[i]]=ans+n;
        // cout<<ans+n<<endl;
    }
    for(int i=0;i<n;i++){
        cout<<mp[arr[i]]<<" ";
    }
    cout<<endl;
}
return 0;
}
#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    ll a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    if(a[0]==b[0]&&n==1){
        cout<<2<<endl;
    }else{
    ll count=1;
    map<ll ,ll> mp;
    for(int i=0;i<n-1;i++){
        if(i==n-2){
                if(a[i]==a[i+1]){
                    count++;
                if(mp[a[i]]<=count){
                    mp[a[i]]=count;
                }  
                }else{
                if(mp[a[i]]<=count){
                    mp[a[i]]=count;
                }
                count=1;
                if(mp[a[i+1]]<=count){
                    mp[a[i+1]]=count;
                }  
                }
                count=1;             
            }
        else if(a[i]==a[i+1]){
            count++;
        }else{
            if(mp[a[i]]<=count){
                mp[a[i]]=count;
            }
            count=1;
        }
    }
    map<ll ,ll> mp2;
    count=1;
    for(int i=0;i<n-1;i++){
        if(i==n-2){
                if(b[i]==b[i+1]){
                    count++;
                    if(mp2[b[i]]<=count){
                        mp2[b[i]]=count;
                    }  
                }else{
                    if(mp2[b[i]]<=count){
                        mp2[b[i]]=count;
                    }
                    count=1;
                    if(mp2[b[i+1]]<=count){
                        mp2[b[i+1]]=count;
                    }  
                }
                count=1;            
            }
        else if(b[i]==b[i+1]){
            count++;
            
        }else{
            if(mp2[b[i]]<=count){
                mp2[b[i]]=count;
            }
            count=1;
        }
    }
    ll maxi=1;
      for(auto it:mp2){
    if(it.second>maxi)maxi=it.second;
  }
  ll ans=1;
  for(ll i=0;i<n;i++){
    ans=max(ans,(mp[a[i]]+mp2[a[i]]));

  }
    // for(int i=0;i<n;i++){
    //     m=max(m,mp[a[i]]+mp2[a[i]]);
    // }
    // for(int i=0;i<n;i++){
    //     m=max(m,mp[b[i]]+mp2[b[i]]);
    // }
    
    // cout<<m<<endl;
     ans=max(ans,maxi);
  cout<<ans<<endl;
    }
}
return 0;
}
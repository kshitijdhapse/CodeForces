#include <bits/stdc++.h>
#define ll long long 
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define f(s,e) for(ll i=s;i<e;i++)
#define cf(i,s,e) for(long long ll i=s;i<=e;i++)
#define rf(e,s) for(long long ll i=e-1;i>=s;i--)

using namespace std;




int main(){
 ll t;cin>>t;
 while(t--){
  ll n;cin>>n;
  ll arr[n];
  ll b[n];
  f(0,n){cin>>arr[i];
 }
  f(0,n){cin>>b[i];}
  ll maxi=1;
  // for(auto it:f2){
  //   if(it.second>maxi)maxi=it.second;


  // }

  map<ll,ll>m1;
  map<ll,ll>m2;ll c1=0;ll c2=0;
  if(n==1){
    if(arr[0]==b[0])cout<<2<<endl;
    else cout<<1<<endl;
  }
  else{

 for(ll i=0;i<n-1;i++){
  if(i==n-2){
    if(arr[i]==arr[i+1]){
      c1++;
      m1[arr[i]]=max(c1+1,m1[arr[i]]);
    }
    else{
      m1[arr[i]]=max(c1+1,m1[arr[i]]);
      c1=0;
      m1[arr[i+1]]=max(c1+1,m1[arr[i+1]]);
    }
  }
  else{

    if(arr[i]==arr[i+1]){
      c1++;
    }
    else{
      m1[arr[i]]=max(c1+1,m1[arr[i]]);
      // cout<<"hi "<<" "<<c1+1<<" ";
      c1=0;
    }
  }
 }

  for(ll i=0;i<n-1;i++){
    if(i==n-2){
    if(b[i]==b[i+1]){
      c2++;
      m2[b[i]]=max(c2+1,m2[b[i]]);
    }
    else{
      m2[b[i]]=max(c2+1,m2[b[i]]);
      c2=0;
      m2[b[i+1]]=max(c2+1,m2[b[i+1]]);
    }
  }
  else{

    if(b[i]==b[i+1]){
      c2++;
    }
    else{
      m2[b[i]]=max(c2+1,m2[b[i]]);
      // cout<<"hi "<<" "<<c1+1<<" ";
      c2=0;


    }
  }

  }
  // for(auto it:m1)cout<<it.second<<" ";
  // cout<<"\n";
  // // cout<<"hi";
  // for(auto it:m2)cout<<it.second<<" ";
  // // cout<<"j ";
  // cout<<"\n";
  ll ans=1;
  for(auto it:m2){
    if(it.second>maxi)maxi=it.second;
  }
  for(ll i=0;i<n;i++){
    ans=max(ans,(m1[arr[i]]+m2[arr[i]]));

  }
  // cout<<maxi<<" ";
  ans=max(ans,maxi);
  cout<<ans<<endl;

  }
}
  return 0;
}
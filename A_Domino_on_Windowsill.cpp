#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
    ll n,k1,k2,w,b;
    cin>>n>>k1>>k2>>w>>b;
    ll i=min(k1,k2);
    ll j=n-max(k1,k2);
    ll adva=abs(k1-k2);
    // cout<<i<<" "<<j<<" "<<w<<" "<<b<<endl;
    if(w<=i+(adva/2)&&b<=j+(adva/2)){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
return 0;
}
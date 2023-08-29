#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
    ll n,m;
    cin>>n>>m;
    ll arr[n];
    ll sum=0;
    ll sumarr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
        sumarr[i]=sum;
        // cout<<sumarr[i]<<" ";
    }
    ll temp=sum;
    // cout<<sum<<endl; 
    for(int i=0;i<m;i++){
        ll a,b,c;
        sum=temp;
        // cout<<sum<<endl;
        cin>>a>>b>>c;
        if(a!=1){
        sum-=sumarr[b-1]-sumarr[a-2];
        sum+=((b-a+1)*c);
        }else{
        sum-=sumarr[b-1];
        sum+=((b-a+1)*c);
        }
        // cout<<sum<<endl;
        if(sum%2==1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}
return 0;
}
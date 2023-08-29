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
    ll count=0,sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    ll a=0,b=0,m1=0,m2=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]+a>0){
            a+=arr[i];
        }else{
            
            a=0;
        }
        m1=max(m1,a);
    }
    for(int i=1;i<n;i++){
        if(arr[i]+b>0){
            b+=arr[i];
        }else{
            b=0;
        }
        m2=max(m2,b);
    }
    if(max(m1,m2)>=sum){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }
}
return 0;
}
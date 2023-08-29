#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    vector<ll> v;
    ll l;
    int stat=0,in=-1,in1=-1;
    ll m=INT_MIN;
    for(int i=0;i<n;i++){
        ll a;
        cin>>a;
        m=max(m,a);
        v.push_back(a);
        if(stat==0&&a>0){
            in=i;
            stat=1;
        }
        if(a>0){
            in1=i;
        }
    }
    for(int i=0;i<n;i++){
        
    }
    ll p=0,q=0;
    for(int i=in;i<=in1;i++){
        if(i%2==0){
            p+=v[i];
        }else{
            q+=v[i];
        }
    }
    if(n>1&&in!=-1&&in1!=-1){
        cout<<max(p,q)<<endl;
    }else{
        cout<<m<<endl;
    }
    // cout<<arr[0]<<' ';    

}
return 0;
}
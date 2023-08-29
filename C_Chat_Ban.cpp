#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
    ll n,x;
    cin>>n>>x;
    ll sum=1;
    int stat=0;
    ll hi=(2*n)-1,lo=1,mid=(hi+lo)/2;
    ll b=((mid)*(mid+1))/2;
    while(hi>lo){
        // cout<<b<<" ";
        if(b>x){
            hi=mid;
        }else if(b<x){
            lo=mid;
        }else{
            stat=1;
            cout<<mid<<endl;
            break;
        }
        if(hi-lo==1){
            if(b<x){
                stat=1;
                cout<<mid+1<<endl;
                break;
            }else{
                stat=1;
            cout<<mid<<endl;
            }
            break;
        }
        mid=(hi+lo)/2;
        
        if(mid<=n){
            b=((mid)*(mid+1))/2;
        }else{
            ll v=mid-(n/2);
            ll u=(n)*(n+1);
            ll d=(n)-1;
            ll k=(d)-(mid-(n/2));
            ll p=(((n)*(n+1))/2);
            ll q=(((k)*(k+1))/2);
            p=p-q;
            b=((u)/2)+((p));
        }
        // cout<<b<<" ";
    }
    if(stat==0){
        cout<<sum<<endl;
    }
}
return 0;
}
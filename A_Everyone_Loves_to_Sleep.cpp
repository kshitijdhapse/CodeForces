#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
    ll n,h,m;
    cin>>n>>h>>m;
    ll mc=INT_MAX,md=INT_MAX;
    for(int i=0;i<n;i++){
        ll a,b;
        cin>>a>>b;
        ll c,d;
        if(a-h<0){
            c=24+(a-h);
        }else{
            c=a-h;
        }
        if(b-m<0){
            d=60+(b-m);
            if(c==0){
                c--;
                c+=24;
            }else{
            c--;
            }
        }else{
            d=b-m;
        }
        if(c<mc){
            mc=c;
            md=d;
        }else if(c==mc){
            if(d<md){
                md=d;
            }
        }
    }
    cout<<mc<<" "<<md<<endl;
}
return 0;
}
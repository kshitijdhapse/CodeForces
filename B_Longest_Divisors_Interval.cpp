#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    ll count=0,m=0;
    for(ll i=1;i<=n;i++){
        if(n%i==0){
            count++;
            if(i==n){
                m=max(count,m);
            }
        }else{
            m=max(count,m);
            break;
        }
    }
    cout<<m<<endl;
}
return 0;
}
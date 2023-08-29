#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
    ll n,a,b;
    cin>>n>>a>>b;
    ll j=0;
    if((a<=n/2&&b<=n/2)||(b<n/2)||(a>(n/2)+1)||(a>=(n/2)+1&&b>=(n/2)+1)){
        cout<<-1<<endl;
    }
    else{
    ll x=n;
    for(int i=0;i<n;i++){
        if(i==0){
            cout<<a<<" ";
        }else if(i==(n/2)){
            cout<<b<<" ";
        }else{
            while(n-j==a||n-j==b){
                j++;
            }
            cout<<n-j<<" ";
            j++;
        }
    }
    cout<<endl;
    }
}
return 0;
}
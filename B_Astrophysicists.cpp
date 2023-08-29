#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
    ll n,k,g;
    cin>>n>>k>>g;
    ll c=(k*g);
    if(c<(((g+1)/2)-1)*n){
        cout<<k*g<<endl;
    }else{
        int j=(k*g)/n;
        ll i=(k*g)-(((g+1)/2)-1)*n;

        cout<<(k*g)-((i+g-1)/g)*g<<endl;
        if((i+(((g+1)/2)-1))%g<((g+1)/2)-1){
            cout<<
        }        
    }
}
return 0;
}
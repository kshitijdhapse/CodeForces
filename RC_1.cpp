#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    ll x;
    cin>>x;
    ll j=0,k=0;
    for(int i=0;i<n;i++){
        cout<<pow(sin(x),j++)<<" ";
    }
    cout<<endl;
}
return 0;
}
#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){

    ll n,k;
    cin>>n>>k;
    ll x=2*n;
    ll o=k/n;
    if(k%n!=0){
        o++;
    }
    cout<<o<<endl;
return 0;
}
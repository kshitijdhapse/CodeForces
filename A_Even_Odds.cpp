#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll a,b;
cin>>a>>b;
if((a+1)/2<b){
    ll x=(a+1)/2;
    ll y=(b-x)*2;
    cout<<y<<endl;
}else{
    ll x=(b)*2;
    cout<<(x)-1<<endl;
}
return 0;
}
#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
ll a,b;
cin>>a>>b;
if(b!=1){
cout<<"YES"<<endl;
if(a!=2&&b!=2){
    ll x=a*b;
    cout<<a<<" "<<(x)-a<<" "<<x<<endl;
}
else if(b==2){
    cout<<a<<" "<<3*a<<" "<<4*a<<endl;
}
else if(a==2){
    cout<<a<<" "<<(2*(b-1))<<" "<<2*b<<endl;
}
}
else{
    cout<<"NO"<<endl;
}
}
return 0;
}
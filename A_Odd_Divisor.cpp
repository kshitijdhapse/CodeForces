#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
ll n;
cin>>n;
int stat=0;

if(n%2==1){
    cout<<"YES"<<endl;
}
else{
    long double x=log2(n);
    ll y=log2(n);
    if(x-y==0){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
}
}
return 0;
}
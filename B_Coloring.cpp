#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
ll n,m,k;
cin>>n>>m>>k;
ll a[m],stat=0,b=0,count=0;
for(ll i=0;i<m;i++){
    cin>>a[i];
    count=max(count,a[i]);
    b+=a[i];
}
//b-=count;
//cout<<b<<endl;
ll x=(n/k);
if(n%k!=0){
    x++;
}
if(x<count){
    cout<<"NO"<<endl;
}
else if(b==n){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
}
return 0;
}
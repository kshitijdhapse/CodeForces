#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
// ll n;
// cin>>n;
// ll x=n;
// ll count=0;
// ll u=1;
// while(x!=0){
// count++;
// x=x/10;

// u*=10;
// u+=1;
// }
// u=u/10;
// //cout<<u<<endl;
// ll sum=0;
// ll a=u,stat=0;
// while(sum<=n&&a!=1){

// if(sum+a>n){
//     a=a/10;
//     //cout<<a<<endl;
// }
//     sum+=a;
// if(sum==n){
//     cout<<"YES"<<endl;
//     stat=1;
// }
// }
// if(stat==0){
//     cout<<"NO"<<endl;
// }
string n,x;
cin>>n;
x=n;
int a=n.size();
sort(n.begin(),n.end());
if(x!=n){
    cout<<"NO"<<endl;
}
else if(n[a-1]!=n[a-2]){
    cout<<"NO"<<endl;
}
else {
    cout<<"YES"<<endl;
}
}
return 0;
}
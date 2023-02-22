#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
ll a,b;
cin>>a>>b;
ll n,m;
cin>>n>>m;
ll i=a*m;
ll r,x;
    //if(i/(m+1)<=b*n){
    ll o=((n))/(m+1);
    ll p=(o)*a*m;
    // cout<<p<<endl;
    ll u=(n%(m+1))*(min(a,b));
    r=(p)+(u);
    //}
    // else{
        x=b*n;
    // }
    cout<<min(x,r)<<endl;
// }

}
return 0;
}
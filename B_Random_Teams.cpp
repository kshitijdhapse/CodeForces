#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m;
cin>>n>>m;
ll i=0;
if((n+m+1)%2==0){
    i+=(n-m+1)/2;
    i*=n-m;
}else{
    i+=(n-m)/2;
    i*=(n-m+1);
}

ll x=i;
ll o=n/m;
ll p=0;
ll c=m;
p+=(m-(n%m))*((o)*(o-1))/2;
if(n%m!=0){
    o++;
    p+=(n%m)*((o)*(o-1))/2;
    c--;
}
// cout<<o<<" "<<c<<endl;
// ll r=c*((o)*(o-1))/2;
// p+=r;

cout<<p<<" "<<x<<endl;
return 0;
}
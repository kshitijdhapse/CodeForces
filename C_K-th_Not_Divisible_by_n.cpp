#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
ll a,b;
cin>>a>>b;
ll x=b,y=-1,u=b;
ll count=0;
while(y!=x){ 
    y=x;
    x=u/a;
    u=b+x;
}
//cout<<b<<" "<<u<<endl;
cout<<u<<endl;
}
return 0;
}
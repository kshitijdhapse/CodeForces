#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;

while(t--){
ll a,b,c;
cin>>a>>b>>c;
if(a<b){swap(a,b);}
ll diff=(a-b);
ll mx=2*(diff);
ll p=(c+diff)%mx;
if(p==0){
    p=mx;
}
// cout<<a<<" "<<b<<" "<<c<<" "<<p<<endl;
int x=p;
if(a>mx||b>mx||c>mx||p>mx){
    cout<<-1<<endl;
}else{
    cout<<p<<endl;
}
}
return 0;
}
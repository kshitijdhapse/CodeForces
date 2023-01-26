#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
int a,b,c;
cin>>a>>b>>c;
// ll p,q,r;
// if(a<b){
//     swap(a,b);
// }
ll p=pow(10,a-1);
ll q=pow(10,b-1);
if(c==min(a,b)){
    cout<<p<<" "<<q<<endl;
}
else{
    ll r=pow(10,(c-1));
    cout<<(ll)(p+r)<<" "<<q<<endl;
}
}
return 0;
}
#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll n;
cin>>n;
ll suma=0,sumb=0,sumc=0;
for(int i=0;i<n;i++){
    ll a,b,c;
    cin>>a>>b>>c;
    suma+=a;
    sumb+=b;
    sumc+=c;
}
if(suma==0&&sumb==0&&sumc==0){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
return 0;
}
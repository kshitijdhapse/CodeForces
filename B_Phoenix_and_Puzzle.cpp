#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
ll n;
cin>>n;
ll i=0,stat=0;
while((i+1)*(i+1)*2<=n||(i+1)*(i+1)*4<=n){
    if((i+1)*(i+1)*2==n||(i+1)*(i+1)*4==n){
        cout<<"YES"<<endl;
        stat=1;
        break;
    }
    i++;
}
if(stat==0){
    cout<<"NO"<<endl;
}
}
return 0;
}
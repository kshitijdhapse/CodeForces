#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
ll n;
cin>>n;
if(n%11==0){
    cout<<"YES"<<endl;
    continue;
}
if(n%111==0){
    cout<<"YES"<<endl;
    continue;
}
int stat=0;
while(n>=0){
    n-=11;
    if(n%111==0){
        cout<<"YES"<<endl;
        stat=1;
        break;
    }
}
if(stat==0){
    cout<<"NO"<<endl;
}
}
return 0;
}
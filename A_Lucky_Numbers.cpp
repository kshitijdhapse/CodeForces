#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
string l,r;
cin>>l>>r;
int stat=0,mx=0,p=1;
if(r.length()==1||l==r){
    cout<<l<<endl;
}else{
for(ll i=stoi(l);i<=stoi(r);i++){
    int a=0,b=INT_MAX;
    for(int j=0;j<to_string(i).length();j++){
        a=max(a,int(to_string(i)[j]));
        b=min(b,int(to_string(i)[j]));
    }
    if(abs(a-b)==9){
        cout<<i<<endl;
        stat=1;
        break;
    }else{
        if(mx<abs(a-b)){
            mx=abs(a-b);
            p=i;
        }
    }
}
// cout<<p<<endl;
if(stat==0){
    cout<<p<<endl;
}
}
}
return 0;
}
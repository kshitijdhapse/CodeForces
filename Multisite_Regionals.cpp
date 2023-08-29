#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
ll n,b,a;
cin>>n>>a>>b;
string s;
cin>>s;
ll p=0,q=0,r=0;
for(int i=0;i<n;i++){
    if(s[i]=='A'){
        p++;
    }else if(s[i]=='B'){
        q++;
    }else{
        r++;
    }
}
ll sum=0;
sum+=min(a,p)+min(b,q);
a-=min(a,p);
b-=min(b,q);
if(a>0){
    sum+=min(r,a);
    r-=min(r,a);
}
if(b>0&&r>0){
    sum+=min(r,b);
}
cout<<sum<<endl;
}
return 0;
}
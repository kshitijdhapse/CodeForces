#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
ll n,a;
cin>>n>>a;
string s;
cin>>s;
ll counter=0,kcount=0;
int stat1=0,stat2=0;
ll l,r;
for(int i=0;i<n;i++){
    if(s[i]=='*'){
        kcount++;
    }
    if(s[i]=='*'&&stat1==0){
        //kcount++;
        l=i;
        stat1=1;
    }
    if(s[n-i-1]=='*'&&stat2==0){
        //kcount++;
        r=n-i-1;
        stat2=1;
    }
}
//cout<<l<<" "<<r<<endl;
ll x=l,y;
for(int i=l+1;i<=r;i++){
    if(i-x<=a){
    if(s[i]=='*'){
        y=i;
    }
    // if(i==r){

    // }
    }
    else{
        counter++;
        //cout<<y<<" ";
        x=y;
        i--;
    }
}
if(l!=r){
    counter+=2;
}
else{
    counter++;
}
if(a==1){
    counter=kcount;
}
cout<<counter<<endl;
}
return 0;
}
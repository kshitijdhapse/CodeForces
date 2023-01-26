#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
int n;
cin>>n;
string s;
cin>>s;
map<string,int> mp;
for(int i=0;i<n;i++){
    string x="";
    for(int j=i;j<i+3&&j<n;j++){
    x+=s[j];
    }
    if(x!=""){
        //cout<<x<<" "<<endl;
    mp[x]++;
    }
    x="";
    for(int j=i;j<i+2&&j<n;j++){
    x+=s[j];
    }
    if(x!=""){
        //cout<<x<<" "<<endl;
    mp[x]++;
    }
    x="";
    for(int j=i;j<i+1&&j<n;j++){
    x+=s[j];
    }
    if(x!=""){
        //cout<<x<<" "<<endl;
    mp[x]++;
    }
}
int stat=0;
string u="a";
char c='a';
while(c!='{'){
if(mp.find(u)==mp.end()){
    cout<<u<<endl;
    stat=1;
    break;
}
else{
c+=1;
u=c;
}
}
u="aa";
c='a';
char p='a';

while(p!='{'&&stat==0){
if(mp.find(u)==mp.end()){
    cout<<u<<endl;
    stat=1;
    break;
}
else{
c+=1;
if(c=='z'+1){
    p+=1;
    c='a';
}
string y="vc";
y[0]=p;
y[1]=c;
u=y;
}
}
u="aaa";
c='a';
p='a';
char d='a';
while(d!='{'&&stat==0){
if(mp.find(u)==mp.end()){
    cout<<u<<endl;
    break;
}
else{
c+=1;
if(c=='z'+1){
    p+=1;
    c='a';
}
if(p=='z'+1){
    d+=1;
    p='a';
}
string y="vcc";
y[0]=d;
y[1]=p;
y[2]=c;

u=y;
}
}
}
return 0;
}
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
transform(s.begin(), s.end(), s.begin(), ::tolower);
// cout<<s<<endl;
int stat=0;
int arr[4];
int i=0;
if(s[i]=='m'){
while(s[i]=='m'){
    i++;
}
}else{
    cout<<"NO"<<endl;
    stat=1;
    continue;
}

if(s[i]=='e'){
while(s[i]=='e'){
    i++;
}
}else{
    cout<<"NO"<<endl;
    stat=1;
    continue;
}if(s[i]=='o'){
while(s[i]=='o'){
    i++;
}
}else{
    cout<<"NO"<<endl;
    stat=1;
    continue;
}if(s[i]=='w'){
while(s[i]=='w'){
    i++;
}
}else{
    cout<<"NO"<<endl;
    stat=1;
    continue;
}

if(stat==0&&i==n){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}
}
return 0;
}
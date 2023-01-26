#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
string s;
cin>>s;
int n=s.length();
int in1=-1,in2=-1;
for(int i=0;i<n;i++){
    if(s[i]=='1'){
        in1=i;
        break;
    }
}
for(int i=n-1;i>=0;i--){
    if(s[i]=='1'){
        in2=i;
        break;
    }
}
int count=0;
if(in1!=-1&&in2!=-1){
for(int i=in1;i<=in2;i++){
    if(s[i]=='0'){
        count++;
    }
}
}
cout<<count<<endl;
}
return 0;
}
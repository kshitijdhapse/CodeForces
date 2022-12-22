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
int count=0;
if(s[0]=='e'&&s[1]=='s'){
s="Y"+s;
}
else if(s[0]=='s'){
    s="Ye"+s;
}
n=s.length();
if(s[n-2]=='Y'&&s[n-1]=='e'){
    s=s+"s";
}
else if(s[n-1]=='Y'){
    s=s+"es";
}
 n=s.length();
string a;

for(int i=0;i<n/3;i++){
    a+="Yes";
}
//cout<<a<<" "<<s<<endl;
if(a==s||(s[0]=='e'&&s.length()==1)){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
}
return 0;
}
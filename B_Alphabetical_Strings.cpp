#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
string a="abcdefghijklmnopqrstuvwxyz";
while(t--){
string s;
cin>>s;
sort(s.begin(),s.end());
//cout<<a.find(s)<<endl;
if(a.find(s)==0&&s[0]=='a'){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
}
return 0;
}
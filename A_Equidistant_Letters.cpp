#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
string s;
cin>>s;
map<char,int> mp;
for(int i=0;i<s.length();i++){
    mp[s[i]]++;
}
for(auto x:mp){
    if(x.second==1){
    cout<<x.first;
    x.second=0;
    }
}
for(auto x:mp){
    if(x.second==2){
    cout<<x.first;
    //x.second=0;
    }
}
for(auto x:mp){
    if(x.second==2){
    cout<<x.first;
    }
}
cout<<endl;
}
return 0;
}
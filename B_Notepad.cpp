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
string a,b;
int stat=0;
unordered_map<string,int> mp;
for(int i=0;i<n;i+=2){
    a=s[i];
    a+=s[i+1];
    mp[a]++;
}
//cout<<mp.size()<<" "<<(n+1)/2<<endl;
if(mp.size()<((n+1)/2)){
    cout<<"YES"<<endl;
    stat=1;
}
mp.clear();
if(stat==0){
for(int i=1;i<n;i+=2){
    a=s[i];
    a+=s[i+1];
    mp[a]++;
}
//cout<<mp.size()<<" "<<(n+1)/2<<endl;
if(mp.size()<((n+1)/2)-1){
    cout<<"YES"<<endl;
    stat=1;
}
}
mp.clear();
if(stat==0){
string prev;
for(int i=0;i<n-1;i++){
    a=s[i];
    a+=s[i+1];
    if(prev==a){
        string x=a+"a";
        mp[x]++;
    }
    else{
        mp[a]++;
    }
    prev=a;
}
//cout<<mp.size()<<" "<<n-1<<endl;
if(mp.size()<n-1){
    cout<<"YES"<<endl;
    stat=1;
}
}
if(stat==0){
    cout<<"NO"<<endl;
}
}
return 0;
}
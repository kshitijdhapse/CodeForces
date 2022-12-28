#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
//set<string> s;
map <string,int> mp;
while(t--){
string a;
cin>>a;
if(mp[a]!=0){
    string x=a;
    a+=to_string(mp[a]);
    mp[x]++;
    cout<<a<<endl;
}
else{
    cout<<"OK"<<endl;
}
mp[a]++;
}
return 0;
}
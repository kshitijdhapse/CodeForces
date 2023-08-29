#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
ll n;
cin>>n;
// string arr[(n*(n-1))/2];
string s;
map<string,ll> mp;
string x,o;
if(n==2){
    cin>>x>>o;
    if(x==o){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}else{
for(ll i=0;i<(2*(n-1));i++){
    cin>>s;
    mp[s]++;
}

int stat=0;
    for(auto x:mp){
        string k=x.first;
        reverse(k.begin(),k.end());
        if(mp[k]==0){
            cout<<"NO"<<endl;
            stat=1;
            break;
        }
    }
if(stat!=1){
    cout<<"YES"<<endl;
}
}
}
return 0;
}
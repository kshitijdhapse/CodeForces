#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    map<char,int> mp1;
    map <char,int> mp2;
    for(int i=0;i<n;i++){
        if(i%2==0){
            mp1[s[i]]++;
        }else{
            mp2[s[i]]++;
        }
    }
    int stat=0;
    for(auto x:mp1){
        if(mp2.find(x.first)!=mp2.end()){
            cout<<"NO"<<endl;
            stat=1;
            break;
        }
    }
    if(stat==0){
        cout<<"YES"<<endl;
    }
}
return 0;
}
#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
int c=1;
while(t--){
    int n=26,stat=0;
    char arr[n];
    map<char,char> a;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        // cout<<arr[i]<<" ";
        a[char(65+i)]=arr[i];
        // cout<<a['a']<<endl;
    }
    ll x;
    cin>>x;
    map<string,ll> mp;
    for(int i=0;i<x;i++){
        string s;
        cin>>s;
        // cout<<s<<endl;
        string x;
        for(int j=0;j<s.length();j++){
            x+=(a[s[j]]);
        }
        // cout<<x<<endl;
        if(mp[x]!=0&&stat!=1){
            cout<<"Case #"<<c<<": YES"<<endl;
            stat=1;
        }
        mp[x]++;
    }
    if(stat==0){
            cout<<"Case #"<<c<<": NO"<<endl;
    }
    c++;
}
return 0;
}
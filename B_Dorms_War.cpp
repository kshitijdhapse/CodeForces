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
    ll m;
    cin>>m;
    // char arr[m];
    map<char,int> mp;
    for(int i=0;i<m;i++){
        char a;
        cin>>a;
        mp[a]++;
    }
    int j=0,l=0;
    for(int i=0;i<n;i++){
        if(mp[s[i]]!=0){
            l=max(l,i-j);
            j=i;
        }
    }
    cout<<l<<endl;
}
return 0;
}
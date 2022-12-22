#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t,e=1;
cin>>t;
while(t--){
ll n;
string s;
cin>>n>>s;
ll count=0,max1=0,dist=1;
unordered_map<char,int> mp;
vector <int> v;
//ll y=99,z=min(y,n);
for(int i=0;i<n;i++){
    mp.clear();
    //if(n>99){
    for(int j=i;j<=99+i&&j<n;j++){
        mp[s[j]]++;
        //cout<<mp.size()<<" "<<a->second<<endl;
        // if(mp.size()>=a->second){
        //     count++;
        // }
        for(auto x:mp){
            v.push_back(x.second);
        }
        sort(v.begin(),v.end());
        if(mp.size()>=v[v.size()-1]){
            count++;
        }
        v.clear();
    }
    //}
    // else{
    //     for(int j=i;j<(n);j++){
    //     mp[s[j]]++;
    //     //cout<<mp.size()<<" "<<a->second<<endl;
    //     // if(mp.size()>=a->second){
    //     //     count++;
    //     // }
    //     for(auto x:mp){
    //         v.push_back(x.second);
    //     }
    //     sort(v.begin(),v.end());
    //    // cout<<mp.size()<<" "<<v[v.size()-1]<<endl;
    //     if(mp.size()>=v[v.size()-1]){
    //         count++;
    //     }
    //     v.clear();
    // }
    // }
}
cout<<count<<endl;
}
return 0;
}
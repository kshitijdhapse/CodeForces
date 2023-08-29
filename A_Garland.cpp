#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
string s;
cin>>s;
ll n=s.length();
map<char,int> mp;
for(int i=0;i<n;i++){
    mp[s[i]]++;
}
if(mp.size()==1&&n!=1){
    cout<<-1<<endl;
}else{
    vector<pair<int,char>> v;
    for(auto x:mp){
        pair<int,char> a;
        a.first=x.second;
        a.second=x.first;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size()-1;i++){
        v[v.size()-1].first-=v[i].first;
    }
    if(v[v.size()-1].first<=0){
        cout<<n<<endl;
    }else{
        cout<<n-v[v.size()-1].first+(2*v[v.size()-1].first)<<endl;
    }
}
}
return 0;
}
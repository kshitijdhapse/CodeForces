#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll n;
cin>>n;
string s;
cin>>s;
map<char,int> mp;
for(int i=0;i<n;i++){
    mp[s[i]]++;
}
vector<int> v;
for(auto x:mp){
    v.push_back(x.second);
}
// for(auto x:mp){
//     cout<<x.first<<" "<<x.second<<endl;
// }
sort(v.begin(),v.end());
if(v[v.size()-1]==n){
    cout<<"NO"<<endl;
}
else{
    cout<<"YES"<<endl;
  for(int i=0;i<n-1;i++){
    if(s[i]!=s[i+1]){
        cout<<s[i]<<s[i+1]<<endl;
        break;
    }
  }
}
return 0;
}
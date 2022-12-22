#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
string s;
int n;
cin>>n;
cin>>s;
unordered_map<char,int> mp;
for(int i=0;i<n;i++)
{
    mp[s[i]]++;
}
int sum=0;
for(auto x:mp)
{
    sum+=x.second;
}
cout<<sum+mp.size()<<endl;

}
return 0;
}
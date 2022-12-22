#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
string s;
cin>>s;
int n=s.length();
unordered_map<char,int> mp;
int count=0,eq=1;
for(int i=0;i<n;i++)
{
mp[s[i]]++;
}
// for(auto i:mp)
// {
//     cout<<i.first<<" "<<i.second<<endl;
// }
int sum=0;
for(auto i:mp)
{
   // cout<<i.second<<" ";
    
    if(i.second>=2)
    {
        sum=sum+2;
    }
    else{
        sum=sum+1;
    }
}
//cout<<endl;
cout<<(sum)/2<<endl;
}
return 0;
}
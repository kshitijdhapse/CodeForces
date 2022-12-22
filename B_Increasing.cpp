#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
unordered_map <int,int> mp;
for(int i=0;i<n;i++){
    int a;
cin>>a;
mp[a]++;
}
int stat=0;
for(auto i : mp)
{
    if(i.second>1)
    {
        stat=1;
        cout<<"NO"<<endl;
        break;
    }
}
if(stat==0)
{
    cout<<"YES"<<endl;
}
}
return 0;
}
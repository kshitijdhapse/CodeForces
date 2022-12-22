#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
string s;
cin>>s;
int stat=0;
map<int,char> mip;
for(int i=0;i<n;i++)
{
    if(mip.find(arr[i])!=mip.end()&&s[i]!=mip[arr[i]])
    {
        stat=1;
        break;
    }
    mip.insert({arr[i],s[i]});
}
if(stat==0)
{
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
}
return 0;
}
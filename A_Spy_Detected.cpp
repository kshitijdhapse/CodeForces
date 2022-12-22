#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
int n;
cin>>n;
int a;
int arr[n];
unordered_map<int,int> mp;
for(int i=0;i<n;i++){
cin>>arr[i];
mp[arr[i]]++;
}
pair<int,int> b[2];
int i=0;
for(auto x:mp){
    b[i].first=x.first;
    b[i++].second=x.second;
//cout<<x.first<<" "<<x.second<<endl;
}
int x,y;
if(b[1].second>b[0].second){
x=b[1].first;
}
else{
    x=b[0].first;
}
for(int i=0;i<n;i++)
{
    if(arr[i]!=x){
        cout<<i+1<<endl;
    break;
    }

}}
return 0;
}
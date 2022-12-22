#define ll long long int
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
ll n,a,stat=0;
cin>>n>>a;
ll h[n],p[n],sum=0;
for(ll i=0;i<n;i++){
    cin>>h[i];
    sum+=h[i];
}
for(ll i=0;i<n;i++){
    cin>>p[i];
}
map<int,int> mp;
for(int i=0;i<n;i++){
   // mp[i].first=p[i];
    if(mp[p[i]]<h[i]){
    mp[p[i]]=h[i];
    }
}
// for(auto x:mp){
//     cout<<x.first<<" "<<x.second<<endl;
// }
auto x=mp.begin(),y=mp.begin();
ll dam=a;
while(a>0&&x!=mp.end()){
if((*x).second-dam<=0){
    x++;
if(x==mp.end()){
    cout<<"YES"<<endl;
    stat=1;
}
    continue;

}
else{
   // cout<<(*x).first<<endl;
    //cout<<(*x).second-dam<<endl;
// while((*y).second!=0){
//     y++;
// }
a-=(*x).first;
}
dam+=a;

}
if(stat==0){
    cout<<"NO"<<endl;
}
}
return 0;
}
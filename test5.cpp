#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
int n;
cin>>n;
map<int,int> mp;
for(int i=0;i<n;i++){
    int a;
    cin>>a;
    mp[a]++;
}
for(auto x:mp){
    cout<<x.first<<" "<<x.second<<endl; 
}
}
return 0;
}
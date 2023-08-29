#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
map<char,int> mp;
for(int i=0;i<t;i++){
    string s;
    cin>>s;
    mp[s[0]]++;
}
ll sum=0;
for(auto x:mp){
    if(x.second%2==1&&x.second>2){
        ll y=(x.second+1)/2;
        ll z=(x.second)/2;
        sum+=(((y)*(y-1))/2)+(((z)*(z-1))/2);
    }else if(x.second>2){
        ll z=(x.second)/2;
        sum+=(((z)*(z-1)));
    }
}
cout<<sum<<endl;
return 0;
}
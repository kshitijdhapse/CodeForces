#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
int n;
cin>>n;
int k;
cin>>k;
string s;
cin>>s;
int b=0,eq=0;
map<char,int> mp1;
map<char,int> mp2;
for(int i=0;i<n;i++){
    if(islower(s[i])){
    mp1[s[i]]++;
    }else{
        mp2[s[i]]++;
    }
}
for(auto x:mp1){
    char r=x.first-32;
    while(mp2.find(r)!=mp2.end()&&mp2[r]!=0&&x.second!=0){
    b++;
    mp2[r]--;
    x.second--;
    }
    while(x.second>=2&&k>0){
        b++;
        k--;
        x.second-=2;
    }
}
for(auto x:mp2){
    while(x.second>=2&&k>0){
        b++;
        k--;
        x.second-=2;
    }
}
cout<<b<<endl;
}
return 0;
}
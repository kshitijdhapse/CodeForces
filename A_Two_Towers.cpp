#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
int n,m;
cin>>n>>m;
string a,b;
cin>>a>>b;
string y=a;
string x=b;
reverse(x.begin(),x.end());
reverse(y.begin(),y.end());
string s=a+x;
int count=0,c=0,stat=0;
for(int i=0;i<n+m-1;i++){
    if(s[i]==s[i+1]){
        count++;
    }
    if(s[i]==s[i+1]&&s[i+1]==s[i+2]&&i!=n-1){
        cout<<"NO"<<endl;
        stat=1;
        break;
    }
}
if(stat==1){
    continue;
}
//cout<<count<<endl;
if(count>1){
    cout<<"NO"<<endl;
}else{
    cout<<"YES"<<endl;
}
}
return 0;
}
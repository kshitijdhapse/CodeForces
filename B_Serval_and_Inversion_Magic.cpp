#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
int n;
cin>>n;
string s;
cin>>s;
int stat=0,count=0;
for(int i=0;i<(n+1)/2;i++){
    if(stat==1&&s[i]==s[n-i-1]){
        stat=0;
    }
    else if(s[i]!=s[n-i-1]&&stat==0){
        count++;
        stat=1;
    }
}
if(count<=1){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}
// cout<<count<<endl;
}
return 0;
}
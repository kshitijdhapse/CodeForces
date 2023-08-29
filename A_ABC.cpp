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
if(n>2){
    cout<<"NO"<<endl;
}else{
    if(s.length()==1){
        cout<<"YES"<<endl;
        continue;
    }
    if(s[0]==s[1]){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
}
}
}
return 0;
}
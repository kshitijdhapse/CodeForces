#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
string s;
cin>>s;
int stat=0;
//int stat=0,aa=0,bb=0;
//vector <int> v;
for(int i=0;i<s.length();i++){
    if(s[i-1]!=s[i]&&s[i]!=s[i+1]){
        cout<<"NO"<<endl;
        stat=1;
        break;
    }
}
if(stat==0){
cout<<"YES"<<endl;
}
}
return 0;
}
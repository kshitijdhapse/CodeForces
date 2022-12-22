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
sort(s.begin(),s.end());
cout<<int(s[n-1]-'a'+1)<<endl;
}
return 0;
}
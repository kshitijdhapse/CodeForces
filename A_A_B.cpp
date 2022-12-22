#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
string s;
cin>>s;
int sum=0;
for(int i=0;i<3;i++){
    if(s[i]>='0'&&s[i]<='9')
    {sum+=s[i]-'0';}
}
cout<<sum<<endl;
}
return 0;
}
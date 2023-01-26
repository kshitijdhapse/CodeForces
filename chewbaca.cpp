#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
//s=to_string(n);
if(s[0]!='9'){
    int i=0;
    if(int(s[i])-int('0')>=5){
        s[i]=char(int('9')-int(s[i])+int('0'));
    }
}
for(int i=1;i<s.length();i++){
    if(int(s[i])-int('0')>=5){
        s[i]=char(int('9')-int(s[i])+int('0'));
    }
}
cout<<s<<endl;
return 0;
}
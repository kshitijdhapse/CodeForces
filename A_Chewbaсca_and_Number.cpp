#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
string s;
//cin>>s;
s=to_string(n);
for(int i=0;i<s.length();i++){
    if(int(s[i])>=5){
        s[i]=char(int('9')-int(s[i]));
    }
}
cout<<s<<endl;
return 0;
}
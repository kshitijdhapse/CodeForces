#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
ll n=s.length();
ll count=0;
for(int i=0;i<n;i++){
    if(s[i]=='4'||s[i]=='7'){
        count++;
    }
}
// if(count==n){
//     cout<<"YES"<<endl;
// }
//else{
    s=to_string(count);
    //cout<<s<<endl;
    ll c=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='4'||s[i]=='7'){
            c++;
        }
    }
    //cout<<c<<" "<<s.length()<<endl;
    if(c==s.length()){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
//}
return 0;
}
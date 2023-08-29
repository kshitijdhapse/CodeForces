#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    ll b=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='B'){
            b++;
        }
    }
    if(b==(s.length()-b)){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
return 0;
}
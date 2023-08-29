#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    ll sum=1;
    for(int i=0;i<s.length();i++){
        if(s[i]=='?'){
            if(i==0){
                sum*=9;
            }else{
            sum*=10;
            }
        }
    }
    if(s[0]!='0'){
        cout<<sum<<endl;
    }else{
        cout<<0<<endl;
    }
}
return 0;
}
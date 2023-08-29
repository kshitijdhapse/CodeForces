#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    string ans;
    int n=s.length();
    ans+=s[s.length()-1];
    if(s[0]>='5'){
        ans="1";
        for(int i=0;i<n;i++){
            ans+="0";
        }
    }
    else{
        int in=n;
        for(int i=n-1;i>=1;i--){
            if(s[i]>='5'){
                s[i-1]=char(int(s[i-1])+1);
                in=i;
            }
        }
        if(s[0]>='5'){
            s="1"+s;
            in=1;
            n++;
        }
        for(int i=in;i<n;i++){
            s[i]='0';
        }
        // cout<<s<<endl;
        ans=s;
    }
    cout<<ans<<endl;
}
return 0;
}
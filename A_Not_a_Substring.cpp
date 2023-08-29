#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int isSubstring(string s1, string s2)
{
    if (s2.find(s1) != string::npos)
        return s2.find(s1);
    return -1;
}
int main(){
ll t;
cin>>t;
while(t--){
    
    string s;
    cin>>s;
    ll n=s.length();
    string ans="";
    for(int i=0;i<n;i++){
            ans+='(';
    }
    for(int i=0;i<n;i++){
            ans+=')';
    }
    // cout<<ans<<" ";
    int x=isSubstring(s,ans);
    if(x==-1){
        cout<<"YES"<<endl;
        cout<<ans<<endl;
    }else{
        ans="";
        for(int i=0;i<2*n;i++){
            if(i%2==0){
                ans+='(';
            }else{
                ans+=')';
            }
        }
        // cout<<ans<<" ";
        
        x=isSubstring(s,ans);
        if(x==-1){
            cout<<"YES"<<endl;
            cout<<ans<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}
return 0;
}
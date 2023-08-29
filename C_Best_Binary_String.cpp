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
    ll n=s.length();
    int stat=0,count=0;
    for(int i=0;i<n;i++){
        // cout<<stat<<" ";
       if(s[i]=='1'&&stat==0){
            stat=1;
            ans+='1';
       }else if((s[i]=='?')&&stat==0){
        // cout<<i<<" ";
            
            ans+='0';
       }
       else if((s[i]=='1'||i==n-1)&&stat==1&&s[i]!='0'){
            for(int i=0;i<=count;i++){
                ans+='1';
            }
            count=0;
       }else if((s[i]=='?')&&stat==1){
            count++;
       }
       else{
        stat=0;
        // cout<<i<<" ";
        for(int i=0;i<=count;i++){
                ans+='0';
        }
        count=0;
       }
    }
    // if(i==0){
    //         ans+='0';
    //     }else if(i==n-1&&s[n-2]=='1'){
    //         ans+='1';
    //     }
    //     else if(i==n-1&&s[n-2]=='0'){
    //         ans+='0';
    //     }else if(s[i-1]=='1'&&s[i+1]==1){
    //         ans+='0';
    //     }
    cout<<ans<<endl;
}
return 0;
}
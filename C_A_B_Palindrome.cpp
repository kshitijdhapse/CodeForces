#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
int a,b;
cin>>a>>b;
string s;
cin>>s;
int n=a+b;
int stat=0;int z=0,o=0;
if(n%2==0){
    if(a%2!=0||b%2!=0){
        cout<<-1<<endl;
        continue;
    }
}else{
    if(a%2==0&&b%2==0){
        cout<<-1<<endl;
        continue;
    }
}
for(int i=0;i<(n+1)/2;i++){
    if(s[i]==s[n-i-1]&&s[i]=='1'&&i!=n-i-1){
        if(b>=2){
        b-=2;
        }else{
            cout<<-1<<endl;
            stat=1;
            break;
        }
    }else if(s[i]==s[n-i-1]&&s[i]=='1'){
        if(b>=1){
        b-=1;
        }else{
            cout<<-1<<endl;
            stat=1;
            break;
        }
    }else if(s[i]==s[n-i-1]&&s[i]=='0'&&i!=n-i-1){
        if(a>=2){
        a-=2;
        }else{
            cout<<-1<<endl;
            stat=1;
            break;
        }
    }else if(s[i]==s[n-i-1]&&s[i]=='0'){
        if(a>=1){
        a-=1;
        }else{
            cout<<-1<<endl;
            stat=1;
            break;
        }
    }else if(s[i]!=s[n-i-1]&&(s[i]!='?'&&s[n-i-1]!='?')){
        cout<<-1<<endl;
        stat=1;
        break;
    }
}
if(stat==0){
for(int i=0;i<(n+1)/2;i++){
    if(s[i]=='?'||s[n-i-1]=='?'){
        if(s[i]=='1'||s[n-i-1]=='1'){
            if(b>=2){
                s[n-i-1]='1';
                s[i]='1';
                b-=2;
            }else{
                cout<<-1<<endl;
                stat=1;
                break;
            }
        }else if(s[i]=='0'||s[n-i-1]=='0'){
            if(a>=2){
                s[n-i-1]='0';
                s[i]='0';
                a-=2;
            }else{
                cout<<-1<<endl;
                stat=1;
                break;
            }
        }
        // cout<<a<<" "<<b<<endl;
    }
}
for(int i=0;i<(n+1)/2;i++){
    if(s[i]==s[n-i-1]&&s[i]=='?'&&i!=n-i-1){
        if(a>b){
            if(a>=2){
            s[i]='0';
            s[n-i-1]='0';
            a-=2;
            }
            else{
                cout<<-1<<endl;
                stat=1;
                break;
            }
        }else{
            if(b>=2){
            s[i]='1';
            s[n-i-1]='1';
            b-=2;
            }
            else{
                cout<<-1<<endl;
                stat=1;
                break;
            }
        }
    }else if(s[i]==s[n-i-1]&&s[i]=='?'){
        if(a>b){
            if(a>=1){
            s[i]='0';
            //s[n-i-1]='0';
            a-=1;
            }
            else{
                cout<<-1<<endl;
                stat=1;
                break;
            }
        }else{
            if(b>=1){
            s[i]='1';
            //s[n-i-1]='1';
            b-=1;
            }
            else{
                cout<<-1<<endl;
                stat=1;
                break;
            }
        }
    }
}
}
    // cout<<a<<" "<<b<<endl;
if(stat==0){
    cout<<s<<endl;
}
// for(int i=0;i<n;i++)
}
return 0;
}
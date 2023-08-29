#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int b=0,w=0,m=INT_MAX;
    for(int i=0;i<k;i++){
        if(s[i]=='B'){
            b++;
        }else{
            w++;
        }
    }
    m=min(m,w);
    for(int i=k;i<n;i++){
        if(s[i]=='B'){
            b++;
        }else{
            w++;
        }
        if(s[i-k]=='B'){
            b--;
        }else{
            w--;
        }
        m=min(m,w);
    }
    cout<<m<<endl;
}
return 0;
}
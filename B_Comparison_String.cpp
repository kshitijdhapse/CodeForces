#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
    ll n;
    string s;
    cin>>n>>s;
    ll count=1,m=0;
    if(n==1){
        cout<<2<<endl;
        continue;
    }
    for(int i=0;i<n-1;i++){
        if(s[i]==s[i+1]){
            count++;
            if(i==n-2){
            m=max(count,m);
                count=1;
            }
        }else{
            m=max(count,m);
            count=1;
        }
    }
    cout<<m+1<<endl;
}
return 0;
}
#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    ll x=n;
    bool a=true;
    while(a){
        n++;
        int stat=0;
        for(int i=2;i*i<=n;i++){
            if(n%i==0){    
                stat=1;
                break;
            } 
        }
        if(stat==0){
            a=false;
        }
        
    }
    ll m=n;
    n+=x-1;
    // cout<<n<<" "<<m<<endl;
    a=true;
    while(a){
        n++;
        int stat=0;
        for(int i=2;i*i<=n;i++){
            if(n%i==0){    
                stat=1;
                break;
            } 
        }
        if(stat==0){
            a=false;
        }
        
    }
    // cout<<m<<" "<<n<<endl;
    cout<<(m)*(n)<<endl;
    }
return 0;
}
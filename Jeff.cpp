#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    ll k;
    cin>>k;
    string s;
    cin>>s;
    ll count=0;
    for(int i=k;i<n;i++){
        if(s[i]=='#'){
            count+=2;
        }
    }
    if(count>=k+1){
        cout<<"JAY"<<endl;
    }else{
        cout<<"JEFF"<<endl;
    }
}
return 0;
}
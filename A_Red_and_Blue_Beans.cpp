#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
    ll a,b,c;
    cin>>a>>b>>c;
    if(a>b){
        swap(a,b);
    }
    ll d=b/a;
    if(b%a!=0){
        d++;
    }
    if(d-1<=c){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    // if(abs(a-b)<=c){
    //     cout<<"YES"<<endl;
    // }else{
    //     cout<<"NO"<<endl;
    // }
}
return 0;
}
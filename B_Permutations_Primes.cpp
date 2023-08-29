#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    ll p=4;
    for(int i=0;i<n;i++){
        if(i==(n-1)/2){
            cout<<1<<" ";
        }else if(i==0||(n==2&&i==1)){
            cout<<2<<" ";
        }
        else if(i==n-1){
            cout<<3<<" ";
        }else{
            cout<<p++<<" ";
        }
    }
    cout<<endl;
    // if(n>=3){
    // cout<<3<<endl;
    // }else{
    //     cout<<endl;
    // }
}
return 0;
}
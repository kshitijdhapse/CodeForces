#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll n,sum;
cin>>n>>sum;
ll x=0,y=0;
ll mina[n],maxa[n];
for(int i=0;i<n;i++){
    cin>>mina[i];
    cin>>maxa[i];
    x+=maxa[i];
    y+=mina[i];
}
if(x<sum||y>sum){
    cout<<"NO"<<endl;
}
else{
    cout<<"YES"<<endl;
    ll diff=x-sum;
    //cout<<diff<<endl;
    for(int i=0;i<n;i++){
        if(diff<=0){
            break;
        }
        else if(diff>0){
            if(diff-(maxa[i]-mina[i])>=0){
            diff-=(maxa[i]-mina[i]);
            maxa[i]=mina[i];
            }
            else{
               maxa[i]-=diff;
               diff=0;
            }
           // cout<<diff<<endl;
        }
    }
    for(int i=0;i<n;i++){
        cout<<maxa[i]<<" ";
    }
    cout<<endl;
}
return 0;
}
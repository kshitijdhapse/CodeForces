#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
    ll a[3];
    cin>>a[0]>>a[1]>>a[2];
    sort(a,a+3);
    if(a[0]+a[1]==a[2]){
        cout<<"YES"<<endl;
    }else if(a[0]==a[1]&&a[2]%2==0){
        cout<<"YES"<<endl;
    }else if(a[1]==a[2]&&a[0]%2==0){
        cout<<"YES"<<endl;
    }else if(a[2]==a[0]&&a[1]%2==0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
return 0;
}
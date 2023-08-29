#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
    ll n,l;
    cin>>n>>l;
    ll a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    ll m=0,in=-1;
    for(int i=0;i<n;i++){
        if(i+a[i]<=l){
            if(m<b[i]){
                in=i+1;
                m=b[i];
            }
        }
    }
    cout<<in<<endl;
}
return 0;
}
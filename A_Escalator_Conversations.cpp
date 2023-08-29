#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
    ll n,m,k,H;
    cin>>n>>m>>k>>H;
    ll count=0;
    
    for(int i=0;i<n;i++){
        ll a;
        cin>>a;
        if((H-a)%k==0){
            if(abs(H-a)<=(m-1)*k&&H-a!=0){
                count++;
                // cout<<a<<" ";
            }
        }
}
if(m==1){
    cout<<0<<endl;
    continue;
}
cout<<count<<endl;
}
return 0;
}
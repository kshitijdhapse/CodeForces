#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
    ll a,b;
    cin>>a>>b;
    int stat=0;
    map<ll,ll> mp;
    for(int i=0;i<=(a+1)/2;i++){
        int x=((i*(i-1))/2)+(((a-i)*(a-i-1))/2);
        if(x==b){
            cout<<"YES"<<endl;
            for(int j=0;j<i;j++){
                cout<<1<<" ";
            }
            for(int j=0;j<a-i;j++){
                cout<<-1<<" ";
            }
            cout<<endl;
            stat=1;
            break;
        }
        mp[x]++;
    }
    // for(auto x:mp){
    //     cout<<x.first<<' '<<x.second<<endl;
    // }
    if(stat==0){
    
        cout<<"NO"<<endl;
    }
}
return 0;
}

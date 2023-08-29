#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    ll o1=0,e1=0,o2=0,e2=0;
    for(int i=0;i<n;i++){
        ll a;
        cin>>a;
        if(a%2==0){
            e1++;
        }else{
            o1++;
        }
    }
    ll m;
    cin>>m;
    for(int i=0;i<m;i++){
        ll a;
        cin>>a;
        if(a%2==0){
            e2++;
        }else{
            o2++;
        }
    }
    cout<<(e1*e2)+(o1*o2)<<endl;
}
return 0;
}
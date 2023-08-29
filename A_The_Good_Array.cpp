#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
    ll n,k;
    cin>>n>>k;
    ll fo=0,lo=0,l=0;
    l=(n/k)+1;
    // if(n%k!=0){
    //     l++;
    // }
    if(k==1){
        l--;
    }    
    cout<<l<<endl;
}
return 0;
}
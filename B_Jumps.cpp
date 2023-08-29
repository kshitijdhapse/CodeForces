#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    ll sum=0,i=1;
    while(sum+i<n){
        sum+=i;
        i++;
    }
    sum+=i;
    // i--;
    // cout<<sum<<endl;
    if(sum-n==1){
        cout<<i+1<<endl;
    }else{
        cout<<i<<endl;
    }
}
return 0;
}
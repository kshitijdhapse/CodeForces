#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
    ll n,k;
    cin>>n>>k;
    ll arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ll sum=0,m=INT_MAX,in=0;
    for(int i=0;i<=k;i++){
        sum+=arr[i];
    }
    if(m>sum){
        m=sum;
        in=0;
    }
    for(int i=k;i<n;i++){
        sum+=arr[i]-arr[i-k];
        if(m>sum){
        m=sum;
        in=i-k+1;
    }
    }
    cout<<in+1<<endl;

return 0;
}
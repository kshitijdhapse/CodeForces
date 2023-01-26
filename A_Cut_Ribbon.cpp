#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    ll arr[3];
    ll x=0;
    cin>>arr[0]>>arr[1]>>arr[2];
    int stat=0;
    sort(arr,arr+3);
    for(ll i=0;i<=n/arr[2];i++){
        for(ll j=0;j<=n/arr[1];j++){
            //double k=(n-(arr[2]*i)-(arr[1]*j))/arr[0];
            ll z=(n-(arr[2]*i)-(arr[1]*j))/arr[0];
            //cout<<z<<endl;
            //cout<<k<<" "<<x<<endl;
            if((arr[2]*i)+(arr[1]*j)+(arr[0]*z)==n){
                x=max(x,i+j+z);
            }
    }
    }
cout<<x<<endl;
return 0;
}
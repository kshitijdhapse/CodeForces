#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
    ll arr[n];
    int stat=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        ll o=(pow(k,i));
    if(((arr[i])%o)!=0){
        cout<<"NO"<<endl;
        stat=1;
        break;
    }
    }
    if(stat==0){
        cout<<"YES"<<endl;
    }
}
return 0;
}
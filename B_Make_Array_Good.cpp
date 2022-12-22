#define ll long long int
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
ll n;
cin>>n;
ll arr[n];
for(ll i=0;i<n;i++){
    cin>>arr[i];
}
cout<<n<<endl;
//vector<pair<int,int>> v;
for(ll i=0;i<n;i++){
   // if((arr[i]&(arr[i]-1))!=0){
        ll x=log2(arr[i]);
        ll a=abs(arr[i]-pow(2,x+1));
        cout<<i+1<<" "<<a<<endl;
    // }
    // else{
    //     cout<<i+1<<" "<<0<<endl;
    // }
}
}
return 0;
}
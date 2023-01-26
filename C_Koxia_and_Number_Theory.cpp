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
multiset<ll> s;
for(int i=0;i<n;i++){
    cin>>arr[i];
    //auto x=s.find(arr[i]);
    // if(x){
    // s.insert(arr[i]);
    // }
    // else{
    //     cout<<"NO"<<endl;
    //     break;
    // }
}
sort(arr,arr+n);
for(int i=0;i<n-1;i++){
    if(arr[i]==arr[i+1]){
        cout<<"NO"<<endl;
        break;
    }
}
}
return 0;
}
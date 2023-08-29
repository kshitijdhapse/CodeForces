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
    if(n==1){
        cout<<"YES"<<endl;
        continue;   
    }
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(arr[0]>arr[n-1]){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
}
return 0;
}
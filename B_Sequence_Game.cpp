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
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // if(n==1){
    //     cout<<arr[0]<<endl;
    //     continue;
    // }
    cout<<arr[0]<<" ";
    for(int i=1;i<n;i++){
        if(arr[i-1]>arr[i]){
            cout<<1<<" "<<arr[i]<<" ";
        }else{
            cout<<arr[i]<<" ";
        }
    }
    cout<<endl;
}
return 0;
}
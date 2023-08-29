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
    sort(arr,arr+n);
    ll x;
    cin>>x;
    for(int i=0;i<x;i++){
        ll key;
        cin>>key;
    ll hi=n-1,lo=0,mid=(hi+lo)/2,in=0;
    while(hi>lo){
        if(key>arr[mid]){
            lo=mid;
        }else if(key<arr[i]){
            hi=mid-1;
        }else{
            in=mid;
        }
        if(hi-lo==1){
            if(key>arr[mid]){
                
            }
        }
    }    
    }
}
return 0;
}
#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
    ll a;
    cin>>a;
    ll arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    ll b[a]={0};
    ll j=a-1;
    ll count=0;
    for(int i=a-1;i>=0;i--){
        if(arr[i]>0){
            count=max(arr[i],count);
        }
        if(count>0){
            count--;
            b[i]=1;
        }
    }
    for(int i=0;i<a;i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
}
return 0;
}
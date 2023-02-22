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
ll x=arr[0];
for(int i=2;i<n;i+=2){
    x=__gcd(x,arr[i]);
}
ll y=arr[1];
for(int i=3;i<n;i+=2){
    y=__gcd(y,arr[i]);
}
int stat=0;
// cout<<x<<" "<<y<<endl;
// if(y%x==0){
    for(int i=0;i<n;i+=2){
        if(arr[i]%y==0){
            // cout<<0<<endl;
            stat=1;
            break;
        }
    }
    if(stat==0){
        cout<<y<<endl;
        continue;
    }
// }else if(x%y==0){
    for(int i=1;i<n;i+=2){
        if(arr[i]%x==0){
            // cout<<0<<endl;
            stat=2;
            break;
        }
    }
// }
if(stat==1){
    // if(x==y){
    //     cout<<0<<endl;
    // }else{
        cout<<x<<endl;
    // }
}else{
    cout<<0<<endl;
}
}
return 0;
}
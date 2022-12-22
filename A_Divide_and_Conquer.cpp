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
ll sum=0,min1=INT_MAX,count1=0,min2=INT_MAX,count2=0,odd=0,eve=0;
for(ll i=0;i<n;i++){
    cin>>arr[i];
    ll x=arr[i];
    sum+=arr[i];
    // if(arr[i]%2==0){
    //     eve++;
    // }
    // else{
    //     odd++;
    // }
    while(x%2!=1&&arr[i]%2==0){
        count1++;
        //cout<<count1<<" ";
        x=x/2;
    }
    if(count1<=min1&&arr[i]%2==0){
        min1=count1;
        count1=0;
    }
    else{
        count1=0;
    }
    while(x%2!=0&&arr[i]%2==1){
        count2++;
        //cout<<count<<" ";
        x=x/2;
    }
    if(count2<=min2&&arr[i]%2==1){
        min2=count2;
        count2=0;
    }
    else{
        count2=0;
    }
    
}
//cout<<min1<<" "<<min2<<endl;
if(sum%2==1){
cout<<min(min1,min2)<<endl;
}
else{
    cout<<0<<endl;
}
}
return 0;
}
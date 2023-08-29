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
ll sumarr[n];
ll sum1=0,sum2=0,sum=0,hi=n-1,lo=0,mid=(hi+lo)/2;
for(int i=0;i<n;i++){
    cin>>arr[i];
    sum+=arr[i];
    sumarr[i]=sum;
    if(i<=mid){
        sum1+=arr[i];
    }else{
        sum2+=arr[i];
    }
}
// cout<<sum1<<' '<<sum2<<endl;
ll p=0;
ll no=0;
    while(hi>lo){
        cout<<"?"<<" ";
        cout<<hi-mid<<" ";
        for(int i=mid+1;i<=hi;i++){
            p+=arr[i];
            cout<<i+1<<" ";
        }
        cout<<endl;  
    // }
    ll x;
    cin>>x;
    if(p<x){
        hi=mid;
    }
    else{
        lo=mid+1;
    }
    mid=(hi+lo)/2;
    
}
cout<<"!"<<" "<<lo<<endl;
cout.flush();
}
return 0;
}
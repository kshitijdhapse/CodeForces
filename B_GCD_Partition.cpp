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
ll sumf[n],sumb[n];
ll sum=0,sum1=0;
for(int i=0;i<n;i++){
    cin>>arr[i];
    //sum1+=arr[i];
    //sumf[i]=sum1;
}
int b=0;
sum=arr[0];
for(int i=1;i<n;i++){
    sum1+=arr[i];
    //sumb[b++]=sum;
}

ll x=1;
x=max(x,__gcd(sum,sum1));
for(int i=1;i<n-1;i++){
    sum+=arr[i];
    sum1-=arr[i];
    x=max(x,__gcd(sum,sum1));
    //x=max(x,__gcd(sumf[i+1],sumb[n-i-1]));
}
cout<<x<<endl;
}
return 0;
}
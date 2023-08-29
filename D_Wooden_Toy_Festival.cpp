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
    ll x=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        x=max(arr[i],x);
    }
    // sort(arr,arr+n);
    ll m=0,a=x/3,s1=0,s2=0,s3=0,c1=0,c2=0,c3=0;
    for(int i=0;i<n;i++){
        if(arr[i]<a){
            s1+=arr[i];
            c1++;
        }else if(arr[i]<2*a){
            s2+=arr[i];
            c2++;
        }else{
            s3+=arr[i];
            c3++;
        }
    }
    s1/=c1;
    s2/=c2;
    s3/=c3;
    for(int i=0;i<n;i++){
        if(arr[i]<a){
            m=max(m,abs(arr[i]-s1));
        }else if(arr[i]<2*a){
            m=max(m,abs(arr[i]-s2));
        }else{
            m=max(m,abs(arr[i]-s3));
        }
    }
    cout<<m<<endl;
}
return 0;
}
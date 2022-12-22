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
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
sort(arr,arr+n);
ll sum=0,sum1=0;
for(int i=n-1;i>=0;i--)
{
if(arr[i]>0)
{sum+=arr[i];}
else
{
    sum1+=arr[i];
}
}
//cout<<sum<<" "<<arr[0]<<endl;
cout<<abs(abs(sum)-abs(sum1))<<endl;
}
return 0;
}
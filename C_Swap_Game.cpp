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
ll sum=0;
ll min=LLONG_MAX;
for(int i=0;i<n;i++)
{
    cin>>arr[i];
    sum+=arr[i];
    if(min>arr[i]){
        min=arr[i];
    }
}
//cout<<sum<<endl;
if(sum
%2==1)
{
    cout<<"Bob"<<endl;
}
else
{
    cout<<"Alice"<<endl;
}
}
return 0;
}
#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int  main(){
ll t;
cin>>t;
while(t--){
ll n;
cin>>n;
ll arr[n];
ll max1=0,min1=INT_MAX,maxin,minin,stat=0;
for(ll i=0;i<n;i++)
{
    cin>>arr[i];
}
for(int i=0;i<n-1;i++){
    if(abs(arr[i]-arr[i+1])>=2){
    cout<<"YES\n";
    cout<<i+1<<" "<<i+2<<endl;
    stat=1;
    break;
}
}
if(stat==0){
    cout<<"NO"<<endl;
}

}
return 0;
}
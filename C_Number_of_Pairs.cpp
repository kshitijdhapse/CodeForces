#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
ll n,l,r;
cin>>n>>l>>r;
ll arr[n];
ll x=0,y=0;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
ll sum=0,i=0,j=n-1;
sort(arr,arr+n);
while(true){
    sum=arr[i]+arr[j];
    if(sum>l){
        j--;
    }else if(sum<l){
        i++;
    }else{
        cout<<arr[i]<<" "<<arr[j]<<endl;
        break;
    }
    if(j-i==1){
        cout<<sum<<" "<<arr[i]<<" "<<arr[j]<<endl;
        break;
    }
}   
//cout<<count<<endl;
}
return 0;
}
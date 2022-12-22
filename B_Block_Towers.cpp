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
for(ll i=0;i<n;i++){
    cin>>arr[i];
    //sum+=x;
}
int x=arr[0];
//cout<<(sum/n)+1<<endl;
sort(arr,arr+n);
for(int i=0;i<1;i++){
    for(int j=i+1;j<n;j++){
        if(x<arr[j]){
            if((x+arr[j])%2==0){
                ll a=(x+arr[j])/2;
                arr[j]=a;
                x=a;
            }
            else{
                ll a=((x+arr[j])/2)+1;
                x=a;
                arr[j]=a-1;
            }
       }
        //cout<<x<<" ";
   }
    //cout<<endl;
}
cout<<x<<endl;
}
return 0;
}
#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
int n;
cin>>n;
long long int arr[n];
long long int min1=INT_MAX;
long long int max1=0;
for(int i=0;i<n;i++)
{
    cin>>arr[i];
    // if(arr[i]<min1){
    //     min1=arr[i];
    // }
    if(arr[i]>max1){
        max1=arr[i];
    }
}
sort(arr,arr+n);
min1=arr[0];
for(int i=1;i<=n-1;i++){
     min1=min(min1,(min1&arr[i]));
}
if(n!=1){
cout<<min1<<endl;
}
else{
    cout<<arr[0]<<endl;
}
}
return 0;
}
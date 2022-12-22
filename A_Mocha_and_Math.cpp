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
for(int i=0;i<n-1;i++){
     min1=min(min1,(arr[i]&max1));
}
if(n!=1){
cout<<min1<<endl;
}
else{
    cout<<0<<endl;
}
}
return 0;
}
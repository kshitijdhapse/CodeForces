#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
int n;
cin>>n;
n+=2;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
sort(arr,arr+n);
ll sum=0;
for(int i=0;i<n-1;i++){
    sum+=arr[i];
}
//cout<<sum<<endl;
int in=-1;
if(sum-arr[n-2]==arr[n-2]){
    for(int i=0;i<n-2;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    continue;
}
for(int i=0;i<n-1;i++){
    if(sum-arr[i]==arr[n-1]){
        in=i;
    }
}
if(in==-1){
    cout<<in<<endl;
    continue;
}
for(int i=0;i<n-1;i++){
    if(i!=in){
        cout<<arr[i]<<" ";
    }
}
cout<<endl;

}
return 0;
}
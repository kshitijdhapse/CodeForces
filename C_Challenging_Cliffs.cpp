#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
sort(arr,arr+n);
int a,stat=0;
for(int i=0;i<n-1;i++){
    if(arr[i]==arr[i+1]){
        a=arr[i];
        break;
    }
}
cout<<a<<" ";
int j=0;
for(int i=0;i<n;i++){
    if(arr[i]!=a&&arr[j]!=a&&stat>=2){
        cout<<arr[j--]<<" "<<arr[i];
        stat++;
    }
}
cout<<a<<" ";
}
return 0;
}
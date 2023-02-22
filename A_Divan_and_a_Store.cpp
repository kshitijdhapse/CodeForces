#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
int n,l,r,k;
cin>>n>>r>>l>>k;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
sort(arr,arr+n);
int count=0;
for(int i=0;i<n;i++){
    if(arr[i]>=r&&arr[i]<=l){
    if(k-arr[i]>=0){
        count++;
        k-=arr[i];
    }
    else{
        break;
    }   
    }
}
cout<<count<<endl;
}
return 0;
}
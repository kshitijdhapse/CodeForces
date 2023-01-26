#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
int hole,n;
cin>>hole>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
sort(arr,arr+n);
reverse(arr,arr+n);
int count=0;
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
    if(arr[i]+i-1>=hole){
        count++;
    }
}
cout<<count<<endl;
}
return 0;
}
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
int count=0;
ll ssum=0;
for(int i=0;i<n;i++){
    cin>>arr[i];
    ssum+=arr[i];
}
sort(arr,arr+n);
ll sum=0;
for(int i=0;i<n;i++){
    
    while(arr[i]%2==0){
        arr[i]/=2;
        count++;
    }
    
}

sort(arr,arr+n);
for(int i=0;i<n-1;i++){
    sum+=arr[i];
}
sum=sum+(pow(2,count)*arr[n-1]);
cout<<max(sum, ssum)<<endl;
// cout<<count<<endl;
}
return 0;
}
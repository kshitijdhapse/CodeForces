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
ll sum=1;
for(int i=0;i<n;i++){
cin>>arr[i];
sum*=arr[i];
}
ll a=(sum+(n-1))*2022;
cout<<a<<endl;
}
return 0;
}
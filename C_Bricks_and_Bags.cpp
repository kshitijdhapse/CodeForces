#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
long long int n;
cin>>n;
long long int arr[n];
for(long long int i=0;i<n;i++)
{
    cin>>arr[i];
}
sort(arr,arr+n);
cout<<(2*arr[n-1])-arr[0]-arr[n-2]<<endl;
}
return 0;
}
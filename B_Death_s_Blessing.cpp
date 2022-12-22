#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
pair<long long int,long long int> arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i].second;  
}
for(int i=0;i<n;i++)
{
    cin>>arr[i].first;  
}
sort(arr,arr+n);
// for(int i=0;i<n;i++)
// {
//     cout<<arr[i].first<<" "<<arr[i].second<<endl;
// }
long long int sum=0;
for(int i=0;i<n-1;i++)
{
    sum=sum+arr[i].first;
}
for(int i=0;i<n;i++)
{
    sum=sum+arr[i].second;
}
cout<<sum<<endl;
}
return 0;
}
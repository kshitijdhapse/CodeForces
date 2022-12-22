#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int arr[n];
int sum=0;
for(int i=0;i<n;i++)
{
    cin>>arr[i];
    sum=sum+arr[i];
}
int avg=sum/n,count=0;
for(int i=0;i<n;i++)
{
    if(arr[i]>avg)
    count++;
}
if(sum%n==0)
{
    cout<<count<<endl;
}
else{
    cout<<-1<<endl;
}
}
return 0;
}
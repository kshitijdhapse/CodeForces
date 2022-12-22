#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n,sum=0;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
    sum=sum+arr[i];
}
sum=sum/n;
sort(arr,arr+n);
int counter=1;
if(n!=1)
for(int i=0;i<n-1;i++)
{
if(arr[i]==arr[i+1])
{
    counter++;
    if(i==n-2&&arr[i]==arr[i+1])
    {
     cout<<n-counter<<endl;   
    }
}
else{
    cout<<n-counter<<endl;

    break;
}
}
else{
    cout<<0<<endl;
}
}
return 0;
}
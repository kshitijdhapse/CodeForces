#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int arr[n];
int temp[n];
int counter=0,sum=0;

for(int i=0;i<n;i++)
{
cin>>arr[i];
temp[i]=arr[i];
}
sort(arr,arr+n);
//int counter=0;
for(int i=0;i<n;i++)
{
    if(arr[i]!=temp[i])
    {
        counter++;
    }
}
cout<<counter/2<<endl;
}
return 0;
}
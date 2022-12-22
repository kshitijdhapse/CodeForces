#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
long long int n,m;
cin>>n>>m;
long long int arr1[n],arr2[m];
for(long long int i=0;i<n;i++)
{
    cin>>arr1[i];
}
for(long long int i=0;i<m;i++)
{
    cin>>arr2[i];
}
int sum=0;
for(long long int i=0;i<n;i++)
{
    sum=sum+arr1[i];
    for(long long int j=0;j<m;j++)
    {
        if(arr2[j]>=sum)
        {
            cout<<arr2[j]<<" ";
            break;
        }
    }
}
}
return 0;
}
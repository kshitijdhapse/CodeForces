#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n,k;
cin>>n>>k;
long long int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
long long int max=0,sum=0;
for(int i=0;i<k;i++)
{
    for(int j=i;j<n;j+=k)
    {
        if(max<=arr[j])
        {
            max=arr[j];
        }
    }
    sum+=max;
    max=0;
}
cout<<sum<<endl;
}
return 0;
}
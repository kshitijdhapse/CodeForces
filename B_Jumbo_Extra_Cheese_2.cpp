#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
long long int n;
cin>>n;
pair<long long int,long long int> arr[n];
long long int sum=0,max=0;
for(long long int i=0;i<n;i++)
{
    cin>>arr[i].first;
    cin>>arr[i].second;
    if(arr[i].first<arr[i].second)
    {
        swap(arr[i].first,arr[i].second);
    }
sum=sum+arr[i].second;
//cout<<arr[i].first<<" "<<arr[i].second<<endl;
if(max<=arr[i].first)
{
    max=arr[i].first;
}
}

//cout<<sum<<" "<<max<<endl;
cout<<2*(sum+max)<<endl;
}
return 0;
}
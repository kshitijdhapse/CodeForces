#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
string s;
cin>>s;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
int stat=0;

for(int i=0;i<n-1;i++)
{
    if(arr[i]>arr[i+1])
    {
        if(s[i+1]=='1')
        {
          //  stat=1;
            swap(s[i],s[i+1]);
        }
    }
}
// cout<<s<<endl;
// for(int i=0;i<n;i++)
// {
//     cout<<arr[i]<<" ";
// }
// cout<<endl;
int sum=0;
for(int i=0;i<n;i++)
{
    if(s[i]=='1')
    {
    sum=sum+arr[i];
    }
}
cout<<sum<<endl;
}
return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n,k;
cin>>n>>k;
int arr[n];
int count=0;
for(int i=0;i<n;i++)
{
    cin>>arr[i];
    if(arr[i]==1)
    {
        count++;
    }
}
if(count==0)
{
cout<<"NO"<<endl;
}
else{
    cout<<"YES"<<endl;
}
}
return 0;
}
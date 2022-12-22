#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
int n;
cin>>n;
int a[n+1],b[n+1];
int  k=0,j=0;
for(int i=01;i<=3*n;i++)
{
if(i%3==1)
{
    b[k++]=i;
}
else if(i%3==2)
{
    a[j++]=i;
}
}
cout<<((n+1)/2)<<endl;
for(int i=0;i<(n+1)/2;i++)
{
    cout<<b[i]<<" "<<a[n-i-1]<<endl;
}
}
return 0;
}
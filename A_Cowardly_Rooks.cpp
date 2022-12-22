#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n,m;
cin>>n>>m;
int arr1[m];
int arr2[m];
for(int i=0;i<m;i++)
{
    cin>>arr1[i];
    cin>>arr2[i];
}
// for(int i=0;i<m;i++)
// {
//     cout<<arr1[i]<<endl;
//     cout<<arr2[i]<<endl;;
// }

if(n<m)
{
    cout<<"NO"<<endl;
}

else if(n==m){
sort(arr1,arr1+m);
sort(arr2,arr2+m);
int counter=1,max=0;
for(int i=0;i<m-1;i++)
{
    if(arr1[i]==arr1[i+1])
    {
        counter++;
        if(i==n-2)
        {
            if(max<counter)
            {
                max=counter;
            }
        }
    }
    else{
        if(max<counter)
            {
                max=counter;
            }
        counter=1;
    }
}
if(max>1)
{
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
}
else{
    cout<<"YES"<<endl;
}
}
return 0;
}
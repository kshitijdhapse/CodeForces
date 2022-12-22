#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int arr1[n];
int arr2[n];
int A1=0,A0=0,B1=0,B0=0;
for(int i=0;i<n;i++)
{
    cin>>arr1[i];
    if(arr1[i]==1)
    {
        A1++;
    }
    else{
        A0++;
    }
}
int counter=0;
for(int i=0;i<n;i++)
{
    cin>>arr2[i];
    if(arr2[i]==1)
    {
        B1++;
    }
    else{
        B0++;
    }
    if(arr1[i]!=arr2[i])
    {
        counter++;
    }
}

cout<<min(((abs(A0-B0)))+1,counter)<<endl;
}
return 0;
}
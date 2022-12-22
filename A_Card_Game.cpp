#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n,k1,k2;
cin>>n>>k1>>k2;
int arr1[k1];
int arr2[k2];
for(int i=0;i<k1;i++)
{
    cin>>arr1[i];
}
for(int i=0;i<k2;i++)
{
    cin>>arr2[i];
}
sort(arr1,arr1+k1);
sort(arr2,arr2+k2);
int i=k1-1,j=k2-1,stat=0;
// while(arr1[i]<=arr2[j])
// {
//     if(i==0||j==0)
//     {
//         stat=1;
//     }
//     i--;
//     j--;
// }
if(arr2[k2-1]<arr1[k1-1])
{
    stat=1;
}
if(stat==0)
{
    cout<<"NO"<<endl;
}
else{
    cout<<"YES"<<endl;
}

}
return 0;
}
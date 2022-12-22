#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
long long int n,q;
cin>>n>>q;
long long int arr[n];
long long int a,b,sum=0,sum1=0,sum0=0;
long long int odd=0,eve=0;
for(int i=0;i<n;i++)
{
    cin>>arr[i];
    if(arr[i]%2==0)
    {
        eve++;
    }
    else{
        odd++;
    }
    sum+=arr[i];
}
// for(int i=0;i<q;i++)
// {
//     cin>>a>>b;
//     if(a%2==0)
//     {
//         for(int i=0;i<n;i++)
//         {
//             if(arr[i]%2==0)
//             {
//                 arr[i]+=b;
//             }
//             if(arr[i]%2==0)
//             {
//                 eve++;
//             }

//         }
//     //     for(int i=0;i<n;i++)
//     // {
//     //     sum1+=arr[i];
//     // }
//     // cout<<sum1<<endl;
//     }
//     else{
//         for(int i=0;i<n;i++)
//         {
//             if(arr[i]%2==1)
//             {
//                 arr[i]+=b;
//             }
//             if(arr[i]%2==1)
//             {
//                 odd++;
//             }
//         }
//     }
//     sum1=0;
//     for(int i=0;i<n;i++)
//     {
//         sum1+=arr[i];
//     }
//     cout<<sum1<<endl;
// }
//long long int sum1=0,sum0=0;
for(int i=0;i<q;i++)
{
cin>>a>>b;
if(a==0)
{
sum+=eve*b;
}
else
{
sum+=odd*b;
}
if(b%2==1&&a==0)
{
odd=odd+eve;
eve=0;
}
else if(a==1&&b%2==1)
{
    eve+=odd;
    odd=0;
}
cout<<sum<<endl;
}
// for(int i=0;i<n;i++)
// {
//     if(arr[i]%2==0)
//     {
//         arr[i]+=sum0;
//     }
//     else
//     {
//         arr[i]+=sum1;
//     }
//     sum+=arr[i];

// }


}
return 0;
}
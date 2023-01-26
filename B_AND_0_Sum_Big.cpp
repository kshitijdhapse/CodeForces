#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
// unsigned int factorial(unsigned int n)
// {
//     if (n == 0 || n == 1)
//         return 1;
//     return n * factorial(n - 1);
// }
ll mod=1e9+7;
ll mmul(ll a, ll b)
{
    a = a % mod;
    b = b % mod;
    return (((a * b) % mod) + mod) % mod;
}
int main(){
ll t;
cin>>t;
while(t--){
int n,k;
cin>>n>>k;
ll x=1;
for(int i=0;i<k;i++){
    x=mmul(x,n);
    x=x%mod;
}
cout<<x<<endl;
}
return 0;
}
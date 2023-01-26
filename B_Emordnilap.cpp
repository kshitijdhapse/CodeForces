#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
ll mod= 1000000007;
ll mmul(ll a, ll b)
{
    a = a % mod;
    b = b % mod;
    return (((a * b) % mod) + mod) % mod;
}
unsigned int factorial(unsigned int n)
{
    int res = 1, i;
    for (i = 2; i <= n; i++)
        res = mmul(res,i);
    return res;
}
// unsigned int factorial(unsigned int n)
// {
//     if (n == 0 || n == 1)
//         return 1;
//     return n * factorial(n - 1);
// }
int main(){
ll t;
cin>>t;
while(t--){
ll n;
cin>>n;
if(n!=1){
//ll x=factorial(n);
int x = 1;
    for (int i = 2; i <= n; i++)
        {x = mmul(x,i);}
ll o=(((n-1))*(4+((n-2)*(2)))/2);
x=mmul(x,o);
cout<<x<<endl;
}
else{
    cout<<0<<endl;
}
}
return 0;
}
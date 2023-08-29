#define ll long long int 
#include<bits/stdc++.h>
using namespace std; 
ll mod=1000000007;
long double phi=1.61803398874989484820;
ll expo(ll x, ll y)
{
    ll res = 1;
    x %= mod;
    while (y)
    {
        if (y % 2)
            res = (res * x % mod) % mod;
        x = (x * x) % mod;
        y /= 2;
    }
    return res;
}
ll inv(ll x) { return expo(x, mod - 2); }
ll madd(ll a, ll b)
{
    a = a % mod;
    b = b % mod;
    return (((a + b) % mod) + mod) % mod;
}
ll mmul(ll a, ll b)
{
    a = a % mod;
    b = b % mod;
    return (((a * b) % mod) + mod) % mod;
}
ll msub(ll a, ll b)
{
    a = a % mod;
    b = b % mod;
    return (((a - b) % mod) + mod) % mod;
}
ll mdiv(ll a, ll b)
{
    a = a % mod;
    b = b % mod;
    return (mmul(a, inv(b)) + mod) % mod;
}
int main(){
ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    ll x=pow(phi,n+1);
    ll q=(x/pow(5,0.5));
    cout<<(q+1)%mod<<endl;
  }
return 0;
}
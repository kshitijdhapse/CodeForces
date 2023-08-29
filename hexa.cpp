#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
ll mod=10e9+7;
ll msub(ll a, ll b)
{
    a = a % mod;
    b = b % mod;
    return (((a - b) % mod) + mod) % mod;
}
ll mmul(ll a, ll b)
{
    a = a % mod;
    b = b % mod;
    return (((a * b) % mod) + mod) % mod;
}
ll expo(ll x, ll y)
{
    ll res = 1;
    x %= mod;
    while (y)
    {
        if (y % 2)
            res = (res * x % mod) % mod;
        x = ((x)*( x)) % mod;
        y /= 2;
    }
    return res;
}
ll inv(ll x) { return expo(x, mod - 2); }

ll mdiv(ll a, ll b)
{
    a = a % mod;
    b = b % mod;
    return (mmul(a, inv(b)) + mod) % mod;
}

ll madd(ll a, ll b)
{
    a = a % mod;
    b = b % mod;
    return (((a + b) % mod) + mod) % mod;
}
int main(){
ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    ll sum=1;
    sum=madd(sum,(mmul(((n-1)),(mmul(6,n))))/2);
    sum=mmul(sum,6);
    ll sub=(mmul((n-1),(mmul(n,18)-12)))/2;
    cout<<msub(sum,sub)<<endl;
}
return 0;
}
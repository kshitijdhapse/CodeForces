#define ll long long int 
//#define mod 1000000007;
#include<bits/stdc++.h>
using namespace std;
ll expo(ll x, ll y)
{
    ll mod=1000000007;
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
ll inv(ll x) { 
    ll mod=1000000007;
    return expo(x, mod - 2); }
ll madd(ll a, ll b)
{ll mod=1000000007;
    a = a % mod;
    b = b % mod;
    return (((a + b) % mod) + mod) % mod;
}
ll mmul(ll a, ll b)
{ll mod=1000000007;
    a = a % mod;
    b = b % mod;
    return (((a * b) % mod) + mod) % mod;
}
ll msub(ll a, ll b)
{ll mod=1000000007;
    a = a % mod;
    b = b % mod;
    return (((a - b) % mod) + mod) % mod;
}
ll mdiv(ll a, ll b)
{ll mod=1000000007;
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
ll sum=0;
sum=mmul(n,n+1);
sum=mmul(sum,(mmul(2,n))+1);
sum=mdiv(sum,6);
ll x;
x=mmul(n,n+1);
x=mmul(x,n-1);
x=mdiv(x,3);
sum=madd(x,sum);
sum=mmul(sum,2022);
cout<<sum<<endl;
}
return 0;
}
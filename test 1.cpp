#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
ll mod=35;
int expo(ll x, ll y)
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
int msub(ll a, ll b)
{
    a = a % mod;
    b = b % mod;
    return (((a - b) % mod) + mod) % mod;
}

int main(){
int n;
cin>>n;
//cout<<expo(3,31)<<endl;
cout<<expo(4,99)<<endl;
return 0;
}
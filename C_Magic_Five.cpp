#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
ll mod= 1000000007;
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
    string s;
    cin>>s;
    ll n;
    cin>>n;
    ll sum=0;
    for(ll i=0;i<s.length();i++){
        if((int(s[i])-int('0'))%5==0){
            ll x=expo(2,i);
            ll z=expo(2,s.length());
            ll y=mmul(x,(expo(z,n)-1));
            ll o=mdiv(y,(z-1));
            sum=madd(sum,o);
            // cout<<sum<<endl;
        }
    }    
    cout<<sum<<endl;
return 0;
}
#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
ll mod=998244353;
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
int factorial(unsigned int n)
{
    int res = 1, i;
    for (i = 2; i <= n; i++)
        res =mmul(res,i);
    return res;
}
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
ll mdiv(ll a, ll b)
{
    a = a % mod;
    b = b % mod;
    return (mmul(a, inv(b)) + mod) % mod;
}
int main(){
ll n;
cin>>n;
ll arr[n];
for(ll i=0;i<n;i++){
    cin>>arr[i];
    //cout<<arr[i]<<" ";
}
ll sum=0;
ll x[3];
ll count=1;
for(ll i=0;i<n;i+=3){
    x[0]=arr[i];
    x[1]=arr[i+1];
    x[2]=arr[i+2];
    sort(x,x+3);
    
    if(x[0]==x[1]&&x[1]==x[2]){
        count=mmul(3,count);
    }else if(x[0]==x[1]){
        count=mmul(2,count);
    }
}
ll p=factorial(n/3);
ll o=factorial(n/6);
p=mdiv(p,o);
p=mdiv(p,o);
p=mmul(p,count);
cout<<p<<endl;
return 0;
}
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
ll count=0;
for(ll i=0;i<n;i+=3){
    x[0]=arr[i];
    x[1]=arr[i+1];
    x[2]=arr[i+2];
    if(x[0]==x[1]&&x[1]==x[2]){
        count++;
    }
    //sort(x,x+3);
    //cout<<x[0]<<" "<<x[1]<<" "<<x[2]<<" "<<endl;
    // sum=madd(sum,x[1]);
    // sum=madd(sum,x[2]);
}
ll p=factorial(n/3);
for(ll i=0;i<(n/4)-1;i++){
    p=mdiv(p,2);
}
for(ll i=0;i<count;i++){
    p=mmul(p,6);
}
cout<<p<<endl;
return 0;
}
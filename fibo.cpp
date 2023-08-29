#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
ll mod=10e9+7;
bool isPrime(int n)
{
    if (n <= 1)
        return false;
 
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
 
    return true;
}
int main(){
ll t;
cin>>t;
while(t--){
    ll a=1,b=0;
    ll n=100;
    ll sum=0;
    // cin>>n;
    ll v=0;
    if(n==1){
        cout<<0<<endl;
    }else if(n==2){
        cout<<1<<endl;
    }else{
        for(int i=2;i<n;i++){
            sum=(a+b)%mod;
            if(isPrime(i)){
                v=(v+sum)%mod;
            }   
            b=a;
            a=sum;
        }
        cout<<v<<endl;
    }
}
return 0;
}
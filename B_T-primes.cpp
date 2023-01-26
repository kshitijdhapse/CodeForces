#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
bool isPrime(ll n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
 
    if (n % 2 == 0 || n % 3 == 0)
        return false;
 
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
 
    return true;
}
int main(){
ll n;
cin>>n;
for(int i=0;i<n;i++){
ll a;
cin>>a;
ll count=0;
if(a%2==0&&a!=4||a==1){
    cout<<"NO"<<endl;
}
else{
    //long double x=pow(a,0.5);
    ll o=sqrt(a);
    //long double a=x-o;
    ll res=o*o;
    //cout<<res<<" "<<a<<endl;
    if(res==a){
            //cout<<count<<endl;
            if(isPrime(o)){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
    }
    else{
        cout<<"NO"<<endl;
    }
}
}
return 0;
}
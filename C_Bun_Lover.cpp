#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    ll o=n;
    ll a=0;
    if(n%2==1){
        a+=(((n-1)*(n-1)))/2;
        // cout<<a<<endl;
        n-=2;
        n/=2;
        n++;
        // cout<<n<<endl;
        a+=(n)*(n+1);
        // cout<<a<<endl;
        a+=(n)*(n-1);
        // cout<<a<<endl;
        a++;
    }else{
        a+=(n*n)/4;
        // cout<<a<<endl;
        a+=(((n-2)*(n-2))/4);
        // cout<<a<<endl;
        n-=2;
        n/=2;
        // cout<<n<<endl;
        a+=(n)*(n+1)*2;
        a++;
        // cout<<a<<endl;

    }
    cout<<a+(4*o)<<endl;
}
return 0;
}
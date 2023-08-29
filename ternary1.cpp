#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
    ll n;
    
    cin>>n;
    ll sum=0;
        while(n!=0){
            ll rem=n%3;
            sum+=rem;
            n/=3;
        }
        cout<<sum%2<<endl;

}
return 0;
}
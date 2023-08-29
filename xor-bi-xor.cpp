#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;
        ll i=1;
        ll ones =0, zeros=0;
        while(n!=0){
            if((n&i) == 1) ones+=1;
            else zeros+=1;
            n = n>>1;
        }
        cout<<(ones^zeros)<<endl;

    }
    return 0;
}
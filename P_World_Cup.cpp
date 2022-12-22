#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
ll ciel(ll a,ll b){
    if(a%b==0){
        return (a/b);
    }
    return ((a/b)+1);
}
int main(){
    ll n,ans;
        cin>>n;
        ll a[n]; ans=0; //cout<<ciel(5 , 6)<<endl;
        for(int i=0; i<n; i++){
            cin>>a[i];
            a[i] = a[i] - i; a[i] = max((ll)0 , a[i]);
        }
        vector<ll>v;
        for(int i=0; i<n; i++){
            v.push_back(ciel(a[i] , n));
        }
        ll mi = INT_MAX;
        /*
        for(int i=0; i<n; i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        */
        for(int i=0; i<(v.size()); i++){
            if(v[i] < mi){
                mi = v[i];
            }
        }
        for(int i=0; i<n; i++){
            if(mi == v[i]){
                ans = i+1;
                break;
            }
        }
        cout<<ans<<endl;
    return 0;
}
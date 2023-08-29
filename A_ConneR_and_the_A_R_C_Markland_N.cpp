    #define ll long long int 
    #include<bits/stdc++.h>
    using namespace std;
    int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,s,k;
        cin>>n>>s>>k;
        vector<ll> arr;
        ll a;
        map<ll,ll> mp;
        for(ll i=0;i<k;i++){
            cin>>a;
            mp[a]++;
            // arr.push_back(a);
        }
        a=INT_MAX;
        for(ll i=0;i<s;i++){
            if(mp[s-i]==0){
                a=min(a,i);
                // cout<<i<<endl;
                break;
            }
        }
        for(ll i=0;i<=n-s;i++){
            if(mp[s+i]==0){
                a=min(a,i);
                // cout<<i<<endl;
                break;
            }
        }
        cout<<a<<endl;
    }
    return 0;
    }
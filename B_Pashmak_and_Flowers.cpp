    #define ll long long int
    #include<bits/stdc++.h>
    using namespace std;
    int main(){

    ll n;
    cin>>n;
    ll arr[n];
    map<ll,ll> mp;
    vector<pair<ll,ll>> v;
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]++;
    }
    for(auto x:mp){
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    ll a,b;
    if(mp.size()!=1){
        a=-v[0].first+v[mp.size()-1].first,b=v[0].second*v[mp.size()-1].second;
    }else{
        int x=v[0].second;
         a=0;
         ll s;
         if(x%2==0){
            s=x/2;
            s*=x-1;
         }else{
            s=(x-1)/2;
            s*=x;
         }
         b=s;
    }
    cout<<a<<" "<<b<<endl;
    return 0;
    }
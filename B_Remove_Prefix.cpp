    #define ll long long int 
    #include<bits/stdc++.h>
    using namespace std;
    int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll arr[n];
        map<ll,ll> mp;
        for(ll i=0;i<n;i++){
            cin>>arr[i];
        mp[arr[i]]++;
        }
        ll a=0;
        for(ll i=0;i<n;i++){
            if(mp[arr[i]]>1){
                // if(i>(n-1)/2){
                    a=max(a,i+1);
                    mp[arr[i]]--;
                // }else{
                //     a=max(a,i);
                }
        }
        cout<<a<<endl;
    }
    return 0;
    }
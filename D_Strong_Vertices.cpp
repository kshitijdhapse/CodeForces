#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    pair<ll,ll> arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i].first;
    }
    for(int i=0;i<n;i++){
        cin>>arr[i].second;
    }
    // for(int i=0;i<n;i++){
    //     cout<<arr[i].first<<" "<<arr[i].second<<endl;
    // }
    ll m=INT_MIN;
    for(int i=0;i<n;i++){
        m=max(m,arr[i].first-arr[i].second);
    }
    vector<ll> ans;
    for(int i=0;i<n;i++){
        if(arr[i].first-arr[i].second==m){
            ans.push_back(i+1);
        }
    }
    cout<<ans.size()<<endl;
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
return 0;
}
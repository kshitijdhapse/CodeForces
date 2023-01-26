#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
void insertionSort(std::vector<pair<ll,ll>> &vec){
   for (auto it = vec.begin(); it != vec.end(); it++){
      auto const insertion_point =
      std::upper_bound(vec.begin(), it, *it);
      std::rotate(insertion_point, it, it+1);
   }
}
int main(){
ll t;
cin>>t;
while(t--){
ll n,m;
cin>>n>>m;
ll arr[n];
ll sum=0;
priority_queue<pair<ll,ll>> arr2;
for(int i=0;i<n;i++){
    cin>>arr[i];
    if(i<m){
        sum+=arr[i];
        // arr2[i].first==arr[i];
        // arr2[i].second=i;
        pair<ll,ll> x;
        x.first=arr[i];
        x.second=i;
        arr2.push(x);
    }
}
ll count=0;
sort(arr,arr+n);
for(int i=0;i<n;i++){
    if(sum>arr[i]){
        sum-=(2*arr2.top().first);
        arr[arr2.top().second]=-(arr2.top().first);
        pair<ll,ll> x;
        x.first=-(arr2.top().first);
        x.second=arr2.top().second;
        arr2.push(x);
        arr2.pop();
        count++;
    }
}
cout<<count<<endl;
}
return 0;
}
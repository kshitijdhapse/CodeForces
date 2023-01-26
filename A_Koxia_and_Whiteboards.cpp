#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
ll n,m;
cin>>n>>m;
ll arr[n];
ll arr1[m];
ll sum1=0;
multiset <ll> v;
for(int i=0;i<n;i++){
    cin>>arr[i];
    v.insert(arr[i]);
    //sum1+=arr[i];
}
//auto *x=v.begin();
for(int i=0;i<m;i++){
    cin>>arr1[i];
    //sum1+=arr1[i];
    v.erase(v.begin());
    v.insert(arr1[i]);
}
// ll j=0,i=m-1;
// int x=min(n,m);
// while(x--){
//     sum1-=arr[j++];
//     sum1+=arr1[i--];
//    // arr[j++]=arr1[i--];
// }
// ll sum=0;
// for(int i=0;i<n;i++){
//     sum+=arr[i];
// }
  for (auto it = v.begin(); it != v.end(); it++){
        sum1+=*it;
  }
cout<<sum1<<endl;
}
return 0;
}
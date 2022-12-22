#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
ll n,x;
cin>>n>>x;
// vector<pair<int,int>> v;
// for(int i=0;i<n;i++){
//     pair<int,int> a=<i+1,0>;
//     v.push_back(pair<i+1,0>);
// }
vector<pair<int,int>> v;
unordered_map<int,int> mp;
for(int i=0;i<x;i++){
    ll a,b;
    cin>>a>>b;
    if(abs(a-b)==1){
    mp[a]++;
    mp[b]++;
    }
}
int i=0;
for(auto x:mp){
    if(x.first==1||x.first==n){
        if(x.second>=1){
            v.push_back(x);
        }
    }
    else{
        if(x.second==2){
            v.push_back(x);
        }
    }
    i++;
    //cout<<x.first<<" "<<x.second<<endl;
}
sort(v.begin(),v.end());
pair<int,int> VI[n];
int j=0;
for(int i=0;i<n;i++){
    VI[i].first=i+1;
    VI[i].second=0;
    // cout<<VI[i].first<<" "<<VI[i].second<<endl;
    if(v[j].first==VI[i].first){
        VI[i].second+=v[j].second;
        j++;
    }
    //cout<<VI[i].first<<" "<<VI[i].second<<endl;
}
vector <int> a;
for(int i=0;i<n;i++){
    if(VI[i].second<2&&i!=0){
        a.push_back(VI[i].first);
    }
    else if(VI[i].second<1&&i==0){
        a.push_back(VI[i].first);
    }
}
int count=1,sum=0;
for(int i=0;i<a.size();i++){
    if(abs(a[i]-a[i+1])==1){
        count++;
        if(i==a.size()-1){
          sum+=count*(count-2);
        count=1;  
        }
    }
    else{
        sum+=count*(count-2);
        count=1;
    }
}
cout<<sum+n<<endl;
}
return 0;
}
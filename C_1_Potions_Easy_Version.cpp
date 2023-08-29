#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll n;
cin>>n;
ll arr[n];
priority_queue<ll,std::vector<ll>,std::greater<int>> pq;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
ll sum=0;
for(int i=0;i<n;i++){
    if(sum+arr[i]>=0){
        sum+=arr[i];
        pq.push(arr[i]);
    }else{
        if(!pq.empty())
            if(pq.top()<arr[i]){
            pq.push(arr[i]);
            sum-=pq.top();
            sum+=arr[i];
            pq.pop();
            }
    }
}
cout<<pq.size()<<endl;
return 0;
}
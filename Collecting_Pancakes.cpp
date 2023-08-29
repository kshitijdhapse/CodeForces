#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
ll k=1;
while(t--){
    ll n;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    int x=0,y=0,in=0;
    for(int i=a-1;i<b;i++){
        if(arr[i]>x){
            x=arr[i];
            in=i;
        }
    }
    arr[in]=-1;
    for(int i=c-1;i<d;i++){
        if(arr[i]>y){
            y=arr[i];
            in=i;
        }
    }
    arr[in]=-1;
for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
}
priority_queue<ll> pq;
for(int i=0;i<n;i++){
    if(arr[i]!=-1){
        pq.push(arr[i]);
    }
}
ll sum=x;
for(int i=0;i<n;i++){
    if(i%2==0){
        cout<<pq.top()<<" ";
        sum+=pq.top();
    }
    pq.pop();
}
            cout<<"Case #"<<k<<": "<<sum<<endl;
    k++;
}
return 0;
}
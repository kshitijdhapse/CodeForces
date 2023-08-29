#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
ll n;
cin>>n;
vector<ll> arr;
vector<ll> neg;
ll pos=0,nega=0;
for(int i=0;i<n;i++){
    ll a;
    cin>>a;
    if(a>0){
        pos++;
        arr.push_back(a);
    }else if(a<0){
        nega++;
        neg.push_back(a);
    }
}
ll sum=0;
for(int i=0;i<pos;i++){
    cout<<++sum<<" ";
}
for(int i=0;i<nega;i++){
    cout<<--sum<<" ";
}
cout<<endl;
sum=0;
for(int i=0;i<n;i++){
    if(pos>0&&i%2==0){
        pos--;
        cout<<++sum<<" ";
    }
    else if(nega>0&&i%2==1){
        nega--;
        cout<<--sum<<" ";
    }else if(pos>0){
        pos--;
        cout<<++sum<<" ";
    }
    else if(nega>0){
        nega--;
        cout<<--sum<<" ";
    }
}
cout<<endl;
}
return 0;
}
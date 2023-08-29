#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    string s;
    ll arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    queue<ll> q;
    cin>>s;
    ll count=0;
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            count++;
        }
    }
    for(int i=0;i<n;i++){
        if(s[i]=='0'&&arr[i]>count){
            q.push(i);
        }
    }
    for(int i=0;i<n;i++){
            if(s[i]=='1'&&arr[i]<=count&&!q.empty()){
            swap(arr[i],arr[q.front()]);
            q.pop();
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
return 0;
}
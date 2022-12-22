#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
int n;
cin>>n;
int arr[n];
unordered_map<int,int> mp;
for(int i=0;i<n;i++){
    cin>>arr[i];
    mp[arr[i]]++;
}
int count=0;
for(auto x:mp){
    if(x.second>1&&x.second%2!=1){
        count++;
    }
}
if(count%2!=0){
    cout<<mp.size()-1<<endl;
}
else{
    cout<<mp.size()<<endl;
}
}
return 0;
}
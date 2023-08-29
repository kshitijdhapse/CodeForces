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
for(int i=0;i<n;i++){
    cin>>arr[i];
    if(arr[i]==1&&i!=n-1){
        arr[i]++;
    }
}
for(int i=0;i<n-1;i++){
    while(arr[i+1]%arr[i]==0){
        arr[i+1]++;
    }
}
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
}
return 0;
}
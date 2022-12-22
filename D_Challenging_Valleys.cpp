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
for(int i=0;i<n;i++){
    cin>>arr[i];
}
ll count=0,stat=0,stat1=0,j=1,k=1;
vector<pair<int,int>> v;
for(int i=0;i<n;i++){
    if(arr[i]!=arr[i+1]){
        v[i].first();
    }
}
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
for(int i=1;i<v.size()-1;i++){
    if(v[i-1]>v[i]&&v[i]<v[i+1]){
        count++;
    }
    // else{
    //     if(arr[i-j]==arr[i]){
    //     j++;
    //     }
    //     else{
    //         j=1;
    //     }
    //     if(arr[i]==arr[i+k]){
    //     k++;
    //     }
    //     else{
    //         k=1;
    //     }
    // }
    
}
if((arr[0]<arr[1])){
        count++;
    }
    if(arr[n-1]<arr[n-2]){
        count++;
    }
if(count==1||n==1){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
}
return 0;
}
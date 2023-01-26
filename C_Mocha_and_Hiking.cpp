#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
ll n,count=0;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
if(arr[n-1]==1){
    for(int i=n-1;i>=0;i--){
        if(arr[i]==1){
            count++;
        }
        else{
            break;
        }
    }
    for(int i=0;i<n-count;i++){
        cout<<i+1<<" ";
    }
    cout<<n+1<<" ";
    for(int i=n-count;i<n;i++){
        cout<<i+1<<' ';
    }
    cout<<endl;
}
else if(arr[n-1]==0){
    for(int i=0;i<n;i++){
        cout<<i+1<<" ";
    }
    cout<<n+1<<endl;
}
}
return 0;
}
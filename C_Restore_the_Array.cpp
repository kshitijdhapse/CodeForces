#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    ll arr[n-1];
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    int stat=0;
    for(int i=0;i<n-2;i++){
        
        if(arr[i]<arr[i+1]&&stat==0){
            cout<<arr[i]<<" "<<0<<" ";
            stat=1;
        }else if(arr[i]==arr[i+1]){
            cout<<arr[i]<<" "<<0<<" ";
            i++;
        }else{
            cout<<arr[i]<<" ";
        }
        
    }
    cout<<endl;
}
return 0;
}
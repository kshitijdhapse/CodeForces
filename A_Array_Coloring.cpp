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
    ll o=0,e=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%2==0){
            e++;
        }else{
            o++;
        }
    }
    if(o%2==1){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }
}
return 0;
}
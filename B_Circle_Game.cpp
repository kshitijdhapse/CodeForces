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
    }
    if(n%2==0){
        if(n==2){
            if(arr[0]==arr[1]){
                cout<<"Joe"<<endl;
            }else{
                cout<<"Mike"<<endl;
            }
        }else{
        cout<<"Joe"<<endl;
        }
    }else{
        cout<<"Mike"<<endl;
    }
}
return 0;
}
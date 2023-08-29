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
    ll a=0,in1,in2;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==1){
            in1=i;
        }
        if(arr[i]==2){
            in2=i;
        }
    }
    swap(arr[in],arr[n-1]);
    // for(int i=0;i<n;i++){
        cout<<in+1<<" "<<n<<endl;
    // }
    
}
return 0;
}
#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    int arr[n];
    map<int,int> mp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int in=0,count=0,stat=0;;
    for(int i=0;i<n;i++){
        cout<<n-arr[i]+1<<" ";
    }
    cout<<endl;

}
return 0;
}
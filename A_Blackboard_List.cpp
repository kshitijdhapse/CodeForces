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
    int mn=INT_MAX,mx=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mx=max(mx,arr[i]);
        mn=min(mn,arr[i]);
    }
    if(mn<0){
        cout<<mn<<endl;
    }else{
        cout<<mx<<endl;
    }
}
return 0;
}
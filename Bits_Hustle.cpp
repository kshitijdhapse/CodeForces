#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    int k;
    cin>>k;
    ll arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ll count=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(2*(arr[i]|arr[j])==arr[i]+arr[j]+k){
                count++;
            }
        }
    }
    cout<<count<<endl;
return 0;
}
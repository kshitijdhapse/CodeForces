#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int stat=0;
    if(arr[0]!=1){
        cout<<1<<endl;
        stat=1;
    }
    if(stat!=1){
    for(int i=0;i<n;i++){
        
        if(i==n-1){
            cout<<arr[i]+1<<endl;
            break;
        }
        if(arr[i+1]-arr[i]>1){
            cout<<arr[i]+1<<endl;
            break;
        }
    }
    }
return 0;
}
#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int d;
    for(int i=0;i<n;i++){
        cin>>arr[i];    
    }
    cin>>d;
    ll count=0;
    for(int i=0;i<n;i++){
        if(d%arr[i]==0&&arr[i]>0){
            count++;
        }
    }
    cout<<count<<endl;
return 0;
}
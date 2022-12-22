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
for(int i=0;i<n;i++){
    cin>>arr[i];
}
ll count=0;
for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]*arr[j]==i+2+j){
            count++;
        }
    }
}
cout<<count<<endl;
}
return 0;
}
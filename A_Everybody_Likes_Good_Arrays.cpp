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
int count=0,minc=0;
for(int i=0;i<n;i++){
    cin>>arr[i];
    
}
for(int i=0;i<n-1;i++){
    if(arr[i]%2==1&&arr[i+1]%2==1){
        count++;
    }
    if(arr[i]%2==0&&arr[i+1]%2==0){
        count++;
    }
}
cout<<count<<endl;
}
return 0;
}
#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
int n;
cin>>n;
int arr[n][n];
int no[n*n];
for(int i=0;i<n*n;i++){
    no[i]=i+1;
    //cout<<no[i]<<" ";
}
int k=(n*n)-1,l=0;
for(int i=0;i<n;i++){
    if(i%2==0){
    for(int j=0;j<n;j++){
        if(j%2==0){
        arr[i][j]=no[k--];
        }
        else{
        arr[i][j]=no[l++];
        }
    }}
    else{
     for(int j=n-1;j>=0;j--){
        if(j%2==1){
        arr[i][j]=no[k--];
        }
        else{
        arr[i][j]=no[l++];
        }
    }   
    }
}
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
}
return 0;
}
#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){

int n,a;
cin>>n>>a;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int count=0;
for(int i=0;i<n;i++){
    if(arr[i]>=arr[a-1]&&arr[i]!=0){
        count++;
    }
}
cout<<count<<endl;
return 0;
}
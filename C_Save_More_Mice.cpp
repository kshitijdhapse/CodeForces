#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
int hole,n;
cin>>hole>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
sort(arr,arr+n);
// reverse(arr,arr+n);
int count=0,k=0,z=0;
for(int i=n-1;i>=k;i--){
    count+=hole-arr[i];
    z++;
    while(count>=arr[k]){
        k++;
    }
}
cout<<z<<endl;
}
return 0;
}
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
//multiset<int> s;
for(int i=0;i<n;i++){
    cin>>arr[i];
   // s.insert(arr[i]);
}
// for(int i=0;i<n;i++){
//     for(int j=i+1;j<n;j++){
// if(s.find(arr[i]%arr[j])==s.end()){
//     cout<<arr[i]<<" "<<arr[j]<<endl;
// }
// if(s.find(arr[j]%arr[i])==s.end()){
//     cout<<arr[j]<<" "<<arr[i]<<endl;
// }
//     }
// }
// for(int i=0;i<n;i++){
sort(arr,arr+n);
for(int i=0;i<n/2;i++){
cout<<arr[n-1-i]<<" "<<arr[0]<<endl;
}
// }
}
return 0;
}
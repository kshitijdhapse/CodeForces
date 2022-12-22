#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
int n;
cin>>n;
int arr[2*n];
for(int i=0;i<2*n;i++){
    cin>>arr[i];
}
if(n>1){
sort(arr,arr+(2*n));
// for(int i=1;i<(2*n)-1;i++){
// if(arr[i]==(arr[i-1]+arr[i+1])/2){
//     swap(arr[i],arr[i-1]);
// }
// }
for(int i=0;i<n;i++){
    cout<<arr[i]<<" "<<arr[(2*n)-i-1]<<" ";
}
cout<<endl;
}
else{
    cout<<arr[0]<<" "<<arr[1]<<endl;
}
}
return 0;
}
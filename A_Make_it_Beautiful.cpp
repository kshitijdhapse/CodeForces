#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
int n;
cin>>n;
ll arr[n];
ll sum=0;
map <int,int> mp;
for(int i=0;i<n;i++){
    cin>>arr[i]; 
    mp[arr[i]]++; 
    //sum+=arr[i]; 
}
sort(arr,arr+n);
if(mp.size()==1){
    cout<<"NO"<<endl;
}
else{
cout<<"YES"<<endl;
for(int i=0;i<(n)/2;i++){  
cout<<arr[n-1-i]<<" "<<arr[i]<<" ";    
}
if(n%2==1){
    cout<<arr[(n)/2]<<" ";
}
cout<<endl;
}
}
return 0;
}
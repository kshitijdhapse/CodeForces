#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
int n,s;
cin>>n>>s;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
sort(arr,arr+n);
int max=arr[n-1];
int sum=0,j=0;
for(int i=0;i<max;i++){
if(i+1==arr[j]){
    j++;
}
else{
    sum+=i+1;
}
}
//cout<<sum<<endl;
if(sum>s){
    cout<<"NO"<<endl;
}
else{
int i=max+1;
int stat=0;
while(sum<=s){
    //cout<<sum<<endl;
    if(sum==s){
        cout<<"YES"<<endl;
        stat=1;
        break;
    }
    sum+=i;
    i++;
    
}
if(stat==0){
    cout<<"NO"<<endl;
}
}
}
return 0;
}
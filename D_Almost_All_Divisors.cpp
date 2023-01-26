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
map<int,int> mp;
for(int i=0;i<n;i++){
    cin>>arr[i];
    mp[arr[i]]++;
}
sort(arr,arr+n);
// for(int i=0;i<n;i++){
//     mp[arr[i]]++;
// }
ll stat=0;
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(mp[arr[i]*arr[j]]!=1){
            cout<<arr[i]*arr[j]<<endl;
            stat=1;
            break;
        }
    }
}
if(stat==0){
    cout<<"-1"<<endl;
}
}
return 0;
}
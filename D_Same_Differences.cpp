#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
long long n,count=0;
cin>>n;
int arr[n];
unordered_map<long long int,long long int> mp;
for(int i=0;i<n;i++)
{
    cin>>arr[i];
    mp[arr[i]-i]++;
}
long long a;
for(auto x:mp){
   // cout<<x.first<<" "<<x.second<<endl;
 a=(((x.second)*(x.second-1))/2);  
 count+=a; 
}
cout<<count<<endl;
}
return 0;
}
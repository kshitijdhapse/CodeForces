#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll n;
cin>>n;
ll arr[2*n];
map<int,int> m1;
map<int,int> m2;
for(int i=0;i<2*n;i++){
    cin>>arr[i];
    if(m1[arr[i]]==0){
        m1[arr[i]]=i+1;
    }else{
        m2[arr[i]]=i+1;
    }
}
// for(auto x:m1){
//     cout<<x.first<<" "<<x.second<<endl;
// }
// for(auto x:m2){
//     cout<<x.first<<" "<<x.second<<endl;
// }
ll sum=0,p1=1,p2=1;
for(int i=1;i<=n-1;i++){
    sum+=min(abs(m1[i]-m1[i+1])+abs(m2[i+1]-m2[i]),abs(m2[i]-m1[i+1])+abs(m2[i+1]-m1[i]));
}
sum+=m1[1]+m2[1]-2;
cout<<sum<<endl;
return 0;
}
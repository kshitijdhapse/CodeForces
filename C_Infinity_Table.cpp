#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
int k;
cin>>k;
ll sum=0;
ll i=1,count=0;
while(sum<k){
    sum+=i;
    i+=2;
    count++;
}
// cout<<sum<<" "<<sum-count+1<<endl;
if(k>sum-count+1){
    cout<<count<<' '<<count+(sum-count+1-k)<<endl;
}else{
    cout<<count-(sum-count+1-k)<<" "<<count<<endl;
}
}
return 0;
}
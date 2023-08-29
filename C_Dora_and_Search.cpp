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
ll stat=0,o=0,p=INT_MAX,l=0,r=0;
for(int i=0;i<n;i++){
    cin>>arr[i];
 p=min(p,arr[i]);
 o=max(o,arr[i]);
}
// if()
for(int i=0;i<n-3;i++){
    if(o==arr[l]&&p==arr[r]){
        r++;
    }
}
if(stat==0){
    cout<<-1<<endl;
}
}
return 0;
}
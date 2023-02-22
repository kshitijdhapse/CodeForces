#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
int n,k;
cin>>n>>k;
ll c=0,count=0,x=0,y=0;
for(int i=0;i<n;i++){
    int l,r;
    cin>>l>>r;
    if(l==k&&r==k){
        c++;
    }
    if(l<=k&&r>=k){
        count++;
    }
    if(l==k){
        x++;
    }if(r==k){
        y++;
    }
}
// if(c>0){
//     cout<<"YES"<<endl;
// }else if(n==1){
//     cout<<"NO"<<endl;
// }else if(count>1){
//     cout<<"YES"<<endl;
// }else{
//     cout<<"NO"<<endl;
// }
if(x>0&&y>0){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}
}
return 0;
}
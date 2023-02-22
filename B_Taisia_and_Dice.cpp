#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
int n,b,c;
cin>>n>>b>>c;
int rem=c%(n-1);
//cout<<rem<<endl;
cout<<b-c<<" ";
for(int i=0;i<n-1;i++){
    if(rem>0){
    cout<<(c/(n-1))+(1)<<" ";
    rem--;
    }
    else{
        cout<<(c/(n-1))<<" ";
    }
}
cout<<endl;
}
return 0;
}
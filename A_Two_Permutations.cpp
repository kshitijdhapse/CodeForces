#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
int n,a,b;
cin>>n>>a>>b;
if(n==a==b==1){
    cout<<"Yes"<<endl;
}
else{
    if(n-(a+b)>1){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}
}
return 0;
}
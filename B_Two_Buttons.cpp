#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m;
cin>>n>>m;
int i=0,ans=0,x=n;
while(m>n){
    ans++;
    if(m%2!=0){
        ans++;
    }
    m=(m+1)/2;
}

cout<<ans+abs(m-n)<<endl;
return 0;
}
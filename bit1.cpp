#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
int n;
cin>>n;
int x=1;
if(n&(n-1)!=0){
    while(n!=1){
        n = n >> 1;
        x = x << 1;
    }
    cout<<x<<endl;
}
}
return 0;
}
#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
int n;
cin>>n;
if(n%2==1){
    for(int i=0;i<n;i++){
        cout<<2<<" ";
    }
    cout<<endl;
}
else if(n==2){
    cout<<1<<" "<<3<<endl;
}
else{
    for(int i=0;i<n-2;i++){
        cout<<2<<" ";
    }
    cout<<1<<" "<<3<<endl;
}
}
return 0;
}
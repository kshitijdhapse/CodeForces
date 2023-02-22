#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
int n;
cin>>n;
if(n%2==0){
    cout<<"No"<<endl;
}else{
    cout<<"Yes"<<endl;
    for(int i=0;i<n;i++){
        cout<<i+1<<" "<<(2*n)-(i)<<endl;
    }
}
}
return 0;
}
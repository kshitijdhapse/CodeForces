#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
ll n;
cin>>n;
if(n%2==0){
    cout<<"YES"<<endl;
    //cout<<1<<" ";
    for(int i=0;i<(n)/2;i++){
        cout<<1<<" "<<-1<<" ";
    }
    cout<<endl;
}
else if(n>=5){
    cout<<"YES"<<endl;
    int x=n/2;
    cout<<x-1<<" ";
    for(int i=0;i<(n)/2;i++){
        cout<<-(x)<<" "<<(x-1)<<" ";
    }
    cout<<endl;
}
else{
    cout<<"NO"<<endl;
}
}
return 0;
}
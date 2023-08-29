#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    if(n%2!=0&&n!=1){
        cout<<-1<<endl;
        continue;
    }
    cout<<n<<" ";
    for(int i=0;i<n-1;i++){
        cout<<i+1<<" ";
    }
    cout<<endl;
}
return 0;
}
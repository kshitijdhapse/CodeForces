#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    ll o=(2*n)-3,p=1;
    cout<<(2*n)-1<<' ';
    for(int i=0;i<n-1;i++){
        if(i%2==0){
            cout<<p<<" ";
            p+=2;
        }else{
            cout<<o<<" ";
            o-=2;
        } 
    }
    o=(2*n)-2,p=2;
    cout<<endl;
    for(int i=0;i<n-1;i++){
        if(i%2==0){
            cout<<p<<" ";
            p+=2;
        }else{
            cout<<o<<" ";
            o-=2;
        } 
    }
    cout<<(2*n)<<' ';
    cout<<endl;

}
return 0;
}
#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    ll a[n],b[n];
    ll m=0,x=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        m=max(a[i],m);
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
        x=max(b[i],x);
    }
    int stat=0;
    for(int i=0;i<n;i++){
        if(a[i]>a[n-1]){
            if(a[i]<=b[n-1]&&b[i]<=a[n-1]){
                
            }else{
                cout<<"No"<<endl;
                stat=1;
                break;
            }
        }else if(b[i]>b[n-1]){
            if(a[i]<=b[n-1]&&b[i]<=a[n-1]){

            }else{
                cout<<"No"<<endl;
                stat=1;
                break;
            }
        }

    }
    if(stat==0){
        cout<<"Yes"<<endl;
    }

}
return 0;
}
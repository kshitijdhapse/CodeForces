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
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    ll stat=0,in1=0,in2=0,m=INT_MAX,x=0;
    for(int i=0;i<n;i++){
        cin>>b[i];
        if(a[i]!=b[i]&&stat==0){
            in1=i;
            m=min(m,a[i]);
            x=max(x,a[i]);
            stat=1;
        }
        if(a[i]!=b[i]){
            m=min(m,a[i]);
            x=max(x,a[i]);
            in2=i;
        }
    }
    // cout<<m<<" "<<x<<endl;
    //     cout<<in1+1<<" "<<in2+1<<endl;

    // ll ix1=in1,ix2=in2,o=m,p=x;
    for(int i=in1-1;i>=0;i--){
        if(a[i]<=m){
            m=a[i];
            in1=i;
        }else{
            break;
        }
    }
    for(int i=in2+1;i<n;i++){
        if(a[i]>=x){
            x=a[i];
            in2=i;
        }else{
            break;
        }
    }
    // for(int i=ix2;i<n;i++){
    //     if(a[i]>=p){
    //         p=a[i];
    //         ix2=i;
    //     }
    // }
    // for(int i=ix1-1;i>=0;i--){
    //     if(a[i]<=o){
    //         o=a[i];
    //         ix1=i;
    //     }
    // }
    
    // if(abs(in1-in2)>abs(ix1-ix2))
        cout<<in1+1<<" "<<in2+1<<endl;
    // else
    //     cout<<ix1+1<<" "<<ix2+1<<endl;


}
return 0;
}
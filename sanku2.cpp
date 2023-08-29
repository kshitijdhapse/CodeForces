#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
// #include<bits/stdc++.h>
using namespace std;
int main(){
    ll t;cin>>t;
    while(t--){
        
     ll n,c1;
     cin>>n>>c1;ll sum=0;
     int arr[n];
     ll sum1=0;
     for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=(long long)(arr[i]*arr[i]);
        sum1+=(long long)(4*arr[i]);
     }
    ll a=4*n;
    ll b=sum1;
    ll c=c1-sum;
    c=(-1*c);
    // cout<<a<<" "<<b<<" "<<c<<endl;
    ll dis=sqrt(((ll)(b*b))-((ll)(4*a*c)));
    ll den=2*a;
    ll root1=((ll)(-b+dis))/((ll)(den));
    if(root1<0){
        ll root2=((ll)(-b-dis))/((ll)(den));
        cout<<root2<<endl;
    }else{
        cout<<root1<<endl;
    }
    



    }
return 0;
}
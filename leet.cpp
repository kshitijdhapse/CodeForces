#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
int n;
cin>>n;
int temp=n;
double x=log2(n);
int y=log2(n);
int p=pow(x,2);
if(x-y==0){
    cout<<1<<endl;
}else{
    int p=pow(2,y),q=pow(2,y+1);
    int r=(q-n),s=(n-p);
    int count=0;
    cout<<r<<" "<<s<<endl;
    // cout<<((r)&(r-1))<<endl;
    // cout<<r<<endl;
    while(((r)&(r-1))>=0){
        int u=log2(r);
        // cout<<u<<endl;
        r-=pow(2,u);
        // cout<<r<<endl;
        count++;
        if(((r)&(r-1))==0){
            count++;
            if(r!=0){
                count++;
            }
            // cout<<count<<endl;
            break;
        }
    }
    int count2=0;
    // cout<<((s)&(s-1))<<endl;
    while(((s)&(s-1))>=0){
        int u=log2(s);
        s-=pow(2,u);
        // cout<<s<<endl;
        count2++;
        if(((s)&(s-1))==0){
            count2++;
            if(s!=0){
                count++;
            }
            // cout<<count2<<endl;
            break;
        }
    }
    cout<<count<<" "<<count2<<endl;
    cout<<min(count,count2)<<endl;
}
// cout<<x<<endl;
}
return 0;
}
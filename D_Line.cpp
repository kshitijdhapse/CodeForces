#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll sum=0;
    for(int i=0;i<n;i++){
        if(i<(n+1)/2){
            if(s[i]=='L'){
                sum+=i;
            }else{
                sum+=n-i-1;
            }
        }else{
            if(s[i]=='L'){
                sum+=i;
            }else{
                sum+=n-i-1;
            }
        }
    }
    // cout<<sum<<endl;
    ll y=sum;
    // for(int i=0;i<n;i++){
        int k=1,l=0,j=0,stat=0;
        while(k<=n&&j<(n+1)/2){
            if(stat==0){
                if(s[j]=='L'){
                    sum-=j;
                    sum+=n-j-1;
                    k++;
                }
                stat=1;
            }else{
                stat=0;
                if(s[n-j-1]=='R'){
                    sum-=j;
                    sum+=n-j-1;
                    k++;
                }
                j++;
            }
            if(l==1){
                cout<<sum<<" ";
                l=0;
            }
        }
        cout<<endl;
    // }
    
}
return 0;
}
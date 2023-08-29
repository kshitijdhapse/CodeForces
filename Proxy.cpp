#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    ll stdcnt=0;
    ll a1[n],a2[n],cnt=0;;
    for(int i=0;i<n;i++){
        cin>>a1[i];
        if(a1[i]==1){
            stdcnt++;
        }
    }
    for(int i=0;i<n;i++){
        cin>>a2[i];
        if(a1[i]==1){
            cnt++;
        }
        if(cnt>0){
        if(a2[i]==0&&a1[i]==0){
            stdcnt++;
            cnt--;
        }
        
        }
    }
    cout<<stdcnt<<endl;
}
return 0;
}
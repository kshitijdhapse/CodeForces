#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
    ll n,k;
    cin>>n>>k;
    int arr[n][n]={0};
    map<int,int> mp;
    for(int i=0;i<n;i++){
        int a,b,c;
        cin>>a;
        if(a==3){
            cout<<n-mp.size()<<endl;
        }else{
            cin>>b>>c;
            arr[b-1][c-1]=1;
            arr[c-1][b-1]=1;
            mp[b]++;
            mp[c]++;
        }
    }
}
return 0;
}
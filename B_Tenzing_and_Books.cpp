#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
    ll n,x;
    cin>>n>>x;
    ll arr[3][n];
    for(int i=0;i<3;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    ll k=0;
    if(k==x){
        cout<<"Yes"<<endl;
    }else{
        ll i=0,j=0,p=0;
        while(1){
            // if((k|arr[0][i])==x){
            //     cout<<"Yes"<<endl;
            //     break;
            // }else if(((k|arr[1][j])==x)){
            //     cout<<"Yes"<<endl;
            //     break;
            // }else if(((k|arr[2][k])==x)){
            //     cout<<"Yes"<<endl;
            //     break;
            // }
            // else{
            //     if()
            // }
            if(k==x){
                cout<<"Yes"<<endl;
                break;
            }
            if((arr[0][i]|x)<=x){
                k=(k|arr[0][i]);
                i++;
            }else if((arr[1][j]|x)<=x){
                k=(k|arr[1][j]);
                j++;
            }else if((arr[2][p]|x)<=x){
                k=(k|arr[2][p]);
                p++;
            }else{
                cout<<"No"<<endl;
                break;
            }
        }
    }
}
return 0;
}
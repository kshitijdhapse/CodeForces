#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
    int n,m;
    cin>>n>>m;
    char arr[n][m];
    string s="vika";
    int stat=0;
    for(int i=0;i<n;i++){
    int a=0;
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
            if(arr[i][j]==s[a]&&a<3){
                a++;
            }
        }
        if(a==3&&stat==0){
            cout<<"YES"<<endl;
            stat=1;
        }
    }
    if(stat==1){
        continue;
    }
    for(int i=0;i<n;i++){
    int a=0;
        for(int j=0;j<m;j++){
            if(arr[j][i]==s[a]&&a<3){
                a++;
            }
        }
        if(a==3){
            cout<<"YES"<<endl;
            stat=1;
            break;
        }
    }
    if(stat==0){
        cout<<"NO"<<endl;
    }
}
return 0;
}
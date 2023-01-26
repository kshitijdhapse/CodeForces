#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
int n,a;
cin>>n>>a;
string s;
cin>>s;
ll sum=0,prevx,prevy;
int arr[n+2];
arr[0]=sum;
for(int j=0;j<n;j++){
        //cout<<(int(s[j])-(int('a')))<<" ";
        sum+=(int(s[j])-(int('a')-1));
        arr[j+1]=sum;
    }
    arr[n+1]=arr[n-1];
    // for(int i=0;i<=n;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
for(int i=0;i<a;i++){
    int a,b;
    cin>>a>>b;
    // a=a-1;
    // b=b-1;
    cout<<arr[b]-arr[a-1]<<endl;
}
return 0;
}
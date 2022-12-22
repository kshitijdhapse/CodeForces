#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
int arr[2][2];
int a=0,b=INT_MAX,xa,ya,xb,yb;
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        cin>>arr[i][j];
    if(a<arr[i][j]){
    a=arr[i][j];
    xa=i;
    ya=j;
    }
    if(b>arr[i][j]){
    b=arr[i][j];
    xb=i;
    yb=j;
    }
    }
}
if(xa!=xb&&ya!=yb){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
}
return 0;
}
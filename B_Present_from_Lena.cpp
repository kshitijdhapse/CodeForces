#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
for(int j=0;j<=n;j++){
    for(int k=0;k<(n-j)*2;k++){
        cout<<" ";
    }
for(int i=0;i<=j;i++){
    cout<<i;
    if(j!=0){
        cout<<" ";
    }
}
for(int i=j-1;i>=0;i--){
    cout<<i;
    if(i!=0){
        cout<<" ";
    }
    
}
cout<<endl;
}
for(int j=n-1;j>=0;j--){
for(int k=0;k<(n-j)*2;k++){
        cout<<" ";
    }
for(int i=0;i<=j;i++){
    cout<<i;
    if(j!=0){
        cout<<" ";
    }
}
for(int i=j-1;i>=0;i--){
    if(i==0){
        cout<<i;
        break;
    }
    cout<<i<<" ";
    
}
cout<<endl;
}

return 0;
}
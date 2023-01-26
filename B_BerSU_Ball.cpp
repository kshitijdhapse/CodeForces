#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){

int n;
cin>>n;
ll a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
int m;
cin>>m;
ll b[m];
for(int i=0;i<m;i++){
    cin>>b[i];
}
sort(a,a+n);
sort(b,b+m);
ll j=0,count=0;
for(int i=0;i<n;i++){
    while(true){
    if(abs(a[i]-b[j])<=1&&j<m){
        count++;
        j++;
        break;
    }
    else if(a[i]>b[j]){
        j++;
    }
    else{
        break;
    }
    }
}
cout<<count<<endl;
return 0;
}
#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll n,k;
cin>>n>>k;
ll sum=0,ate=0,e=1;
for(int i=0;i<n;i++){
    if(sum<k){
        sum+=e++;
    }else if(sum>=k){
        ate++;
        sum--;
    }
}
cout<<ate<<endl;
return 0;
}
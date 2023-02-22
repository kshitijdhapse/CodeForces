#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
int n;
cin>>n;
int arr[n],l=0;
map<int,int> mp1;
map<int,int> mp2;
for(int i=0;i<n;i++){
    cin>>arr[i];
    l=max(l,arr[i]);
    mp1[arr[i]]++;
    mp2[arr[i]]=i+1;
}
int o=-1;
for(int i=1;i<=l;i++){
    for(int j=1;j<=l;j++){
        if(__gcd(i,j)==1){
            if(mp1[i]>0&&mp1[j]>0){
                o=max(o,mp2[i]+mp2[j]);
            }
        }
    }
}
cout<<o<<endl;
}
return 0;
}
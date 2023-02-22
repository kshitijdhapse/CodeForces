#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){

int n;
cin>>n;
int arr[n];
int x[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
    x[i]=arr[i];
}
sort(arr,arr+n);
int count=0,stat=0;
vector<int> v;
for(int i=0;i<n;i++){
    if(x[i]<x[i+1]){
        if(stat==1){
            v.push_back(i+1);
        }
        stat=0;
    }
    else{
        if(stat==0){
            count++;
            v.push_back(i+1);
        }
        stat=1;
    }
}
cout<<count<<endl;
if(count==0){
    cout<<"yes"<<endl;
    cout<<1<<" "<<1<<endl;
}
else if(count<=1){
    cout<<"yes"<<endl;
    cout<<v[0]<<" "<<v[1]<<endl;
}
else{
    cout<<"no"<<endl;
}
return 0;
}
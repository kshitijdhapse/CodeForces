#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){

int n;
cin>>n;
int arr[n];
ll neg=0,zer=0,pos=0,p,q,r,stat=0;
vector <int> v1;
vector <int> v2;
vector <int> v3;
vector <int> v;
for(int i=0;i<n;i++){
    cin>>arr[i];
    if(arr[i]<0){
        v1.push_back(arr[i]);
    }
    if(arr[i]>0){
        v2.push_back(arr[i]);
    }
    if(arr[i]==0){
        v3.push_back(arr[i]);
    }
}
// cout<<v1.size()<<" "<<v2.size()<<" "<<v3.size()<<endl;
if(v1.size()>=1){
    cout<<1<<" "<<v1[0]<<endl;
    v1.erase(v1.begin());
}
// cout<<v1.size()<<" "<<v2.size()<<" "<<v3.size()<<endl;

if(v1.size()>=2){
    cout<<2<<" "<<v1[0]<<" "<<v1[1]<<endl;
    v1.erase(v1.begin());
    v1.erase(v1.begin());
}else if(v2.size()>=1){
    cout<<1<<" "<<v2[0]<<endl;
    v2.erase(v2.begin());
}
// cout<<v1.size()<<" "<<v2.size()<<" "<<v3.size()<<endl;

cout<<v1.size()+v2.size()+v3.size()<<" ";
for(int i=0;i<v1.size();i++){
    cout<<v1[i]<<" ";
}
for(int i=0;i<v2.size();i++){
    cout<<v2[i]<<" ";
}
for(int i=0;i<v3.size();i++){
    cout<<v3[i]<<" ";
}
cout<<endl;
return 0;
}
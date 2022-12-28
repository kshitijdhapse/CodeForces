#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
ll c;
cin>>c;
long double arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
sort(arr,arr+n);
long double a=0;
if(arr[0]!=0){
    a=max(a,arr[0]*2);
}
else{
    a=max(a,arr[1]);
}
if(arr[n-1]!=c){
    a=max(a,(c-arr[n-1])*2);
}
else{
    a=max(a,(arr[n-1]-arr[n-2]));
}
//cout<<a<<endl;
for(int i=1;i<n-2;i++){
    a=max(a,arr[i+1]-arr[i]);
}
//cout<<a<<endl;
long double x=a/2;
cout<<setprecision(9)<<x<<endl;
return 0;
}
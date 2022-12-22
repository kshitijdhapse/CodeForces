#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
int n;
cin>>n;
if(n==1){
    int a;
    cin>>a;
    cout<<0<<endl;
}
else if(n==2){
    int a,b;
    cin>>a>>b;
    if(a==0&&b==1){
        cout<<0<<endl;
    }
    else{
    cout<<1<<endl;
    }
}
else
{
ll arr[n];
ll zero=0,one=0,temp1=0,temp0=0,ino,inz,stat=0;
//cout<<inz<<" "<<ino<<endl;
ll sum1=0,sum2=0,sum3=0;
ll arr1[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
    arr1[i]=arr[i];
}
for(int i=0;i<n;i++){
    if(arr[i]==1){
        one++;
    }
    else{
        zero++;
    }
}
temp1=one,temp0=zero;
for(int i=0;i<n;i++){
    if(arr[i]==1){
        sum1+=temp0;
    }
    else{
        temp0--;
    }
}
for(int i=0;i<n;i++){
    if(arr[n-1-i]==1){
        arr[n-1-i]=0;
        break;
    }
}
zero=0,one=0;
for(int i=0;i<n;i++){
    if(arr[i]==1){
        one++;
    }
    else{
        zero++;
    }
}
temp0=zero,temp1=one;
for(int i=0;i<n;i++){
    if(arr[i]==1){
        sum2+=temp0;
    }
    else{
        temp0--;
    }
}
for(int i=0;i<n;i++){
    if(arr1[i]==0){
        arr1[i]=1;
        break;
    }
}
zero=0,one=0;
for(int i=0;i<n;i++){
    if(arr1[i]==1){
        one++;
    }
    else{
        zero++;
    }
}
temp0=zero,temp1=one;
for(int i=0;i<n;i++){
    if(arr1[i]==1){
        sum3+=temp0;
    }
    else{
        temp0--;
    }
}
cout<<max(max(sum1,sum2),sum3)<<endl;
//cout<<sum3<<endl;
}
}
return 0;
}
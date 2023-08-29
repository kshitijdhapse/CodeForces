#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
int o;
cin>>o;
string n;
cin>>n;
char arr[10];
for(int i=1;i<10;i++){
    cin>>arr[i];
}
string sum;
int stat=0,stat1=0;
for(int i=0;i<o;i++){
    // cout<<n[i]<<' '<<arr[int(n[i])-int('0')]<<endl;
    if(arr[int(n[i])-int('0')]>=n[i]&&stat==0){
        // cout<<n[i]<<' '<<arr[int(n[i])-int('0')]<<endl;
        if(arr[int(n[i])-int('0')]>n[i]){
            stat1=1;
        }
        sum+=arr[int(n[i])-int('0')];
        // cout<<arr[int(n[i+1])-int('0')]<<" "<<n[i+1]<<endl;
        if(arr[int(n[i+1])-int('0')]<n[i+1]){
            // cout<<"hi"<<endl;
            if(stat1==1){
            stat=1;
            }
        }
    }else{
        sum+=n[i];
    }
    // cout<<sum<<endl;
}
// reverse(sum.begin(),sum.end());
cout<<sum<<endl;
return 0;
}
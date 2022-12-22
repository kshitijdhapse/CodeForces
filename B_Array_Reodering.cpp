#define ll long long int
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int arr[n];
ll odd=0,eve=0,sum=0,siz=n-1;
for(int i=0;i<n;i++){
     cin>>arr[i];
if(arr[i]%2==0){
    eve++;
    sum+=(siz--);
}
}
for(int i=0;i<n;i++){
    if(arr[i]%2!=0)
    {
        for(int j=i+1;j<n;j++){
            if(__gcd(arr[i],arr[j])>1&&arr[j]%2==1){
                sum++;
            }
        }
    }
}
cout<<sum<<endl;
}
return 0;
}
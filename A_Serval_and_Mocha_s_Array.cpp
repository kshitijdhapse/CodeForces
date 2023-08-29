#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int x=arr[0],in=0,in1=0,o=INT_MAX;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
        if(__gcd(arr[i],arr[j])<o){
            o=min(__gcd(arr[i],arr[j]),o);
            in=i;
            in1=j;
        }
        }
    }
    if(o<=2){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
}
return 0;
}
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
int count=1,max=0;
for(int i=0;i<n;i++){
    cin>>arr[i];
    if(arr[i]==arr[i+1]){
        count++;
        if(i==n-1){
            if(count>max){
            max=count;
        }
        count=1;
        }
    }
    else {
        if(count>max){
            max=count;
        }
        count=1;
    }
}

}
return 0;
}
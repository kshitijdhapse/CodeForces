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
    int count=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(i+1==arr[i]){
            count++;
        }
    }
    cout<<(count+1)/2<<endl;
}
return 0;
}
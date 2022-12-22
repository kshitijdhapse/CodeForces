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
int two=0,one=0;
for(int i=0;i<n;i++){
    cin>>arr[i];
    if(arr[i]==2){
        two++;
    }
    else{
        two++;
    }
}
if(two%2!=0||one%2!=0){
    cout<<"NO"<<endl;
}
else{
    cout<<"YES"<<endl;
}
}
return 0;
}
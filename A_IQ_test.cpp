#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){

int n;
cin>>n;
int counte=0,counto=0,ine,ino;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
    if(arr[i]%2==0){
        
        counte++;
        ine=i+1;
    }
    else{
        counto++;
        ino=i+1;
    }
}


if(counto<counte){
    cout<<ino<<endl;
}
else{
    cout<<ine<<endl;
}
return 0;
}
#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    // double x=log2(2*(((n)/2)));
    // ll v=log2(2*(((n)/2)));
    // cout<<x<<" "<<v<<endl;
    // if(x-v==0){
    //     cout<<"Bob"<<endl;
    // }else{
    //     cout<<"Alice"<<endl;
    // }
    // if(n==1){
    //     cout<<"Alice"<<endl;
    // }else if(n<=4){
    //     cout<<"Bob"<<endl;
    // }else{
    //     if(n%2==0){
    //         cout<<"Bob"<<endl;
    //     }else{
    //         cout<<"Alice"<<endl;
    //     }
    // }
    if(n<=4){
        cout<<"Bob"<<endl;
    }else{
        cout<<"Alice"<<endl;
    }
}
return 0;
}
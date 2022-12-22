#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
// bool prime(int n){
//     for(int i=2;i<=n;i++){
//         if(n%i==0){
//             return false;
//         }
//         return true;
//     }
// }
int main(){
ll t;
cin>>t;

while(t--){
int a,b;
cin>>a>>b;
if(a==b){
    cout<<a<<" ";
    for(int i=2;i<a;i++){
        cout<<i<<" ";
    }
    cout<<1<<endl;
}
else if(a%b==0){
    cout<<b<<" ";
    for(int i=2;i<a;i++){
        if(i==b){
            cout<<a<<" "<<++i<<" ";
        }
        else{
            cout<<i<<" ";
        }
    }
    cout<<1<<endl;
}
else{
    cout<<-1<<endl;
}
}
return 0;
}
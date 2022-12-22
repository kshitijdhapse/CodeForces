#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
string s;
cin>>s;
int n=s.length();
cout<<s;
string a;
for(int i=n-1;i>=0;i--){
    a+=s[i];
    cout<<s[i];
}
// if(s==a){
//     for(int i=0;i<n;i++){
//         cout<<s[i]<<s[i];
//     }
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<a[i];
//     }
// }
// else{
    cout<<endl;
//}
}
return 0;
}
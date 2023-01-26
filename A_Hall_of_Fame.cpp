#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
ll n;
cin>>n;
string s;
cin>>s;
ll in=-1,in2=-1;
for(int i=0;i<n-1;i++){
if(s[i]=='R'&&s[i+1]=='L'){
    //count++;
    in=0;
}
if(s[i]=='L'&&s[i+1]=='R'){
    in2=i+1;
}
}
// if((s[0]=='R'&&s[1]=='L')||(s[n-1]=='L'&&s[n-2]=='R')){
//     cout<<0<<endl;
// }
// else if((s[0]=='L'&&s[1]=='R')){
//     cout<<0<<endl;
// }
// else if((s[n-1]=='R'&&s[n-2]=='L')){
//     cout<<n-2<<endl;
// }
// else{
//     cout<<-1<<endl;
// }
if(in==0){
    cout<<in<<endl;
}
else if(in!=0&&in2!=-1){
    cout<<in2<<endl;
}
else{
    cout<<in2<<endl;
}
}
return 0;
}
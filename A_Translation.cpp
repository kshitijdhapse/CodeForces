#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
string s,d;
cin>>s>>d;
int n=s.length();
for(int i=0;i<n/2;i++){
    swap(s[i],s[n-1-i]);
}
if(s==d){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
return 0;
}
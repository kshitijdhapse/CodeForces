#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
string s;
cin>>s;
if(s=="YES"||s=="YEs"||s=="Yes"||s=="yes"||s=="YeS"||s=="yeS"||s=="yEs"||s=="yES")
{
    cout<<"YES"<<endl;
}
else
{
    cout<<"NO"<<endl;
}
}
return 0;
}
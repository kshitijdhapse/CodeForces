#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
int n=s.length();
int counter=0;
for(int i=0;i<n;i++)
{
if(s[i]=='.'&&(i==0||i==n-1))
{
    cout<<0;
}
else if(s[i]=='-'&&s[i+1]=='-')
{
    cout<<2;
    i++;
}
else if(s[i]=='-'&&s[i+1]=='.')
{
    cout<<1;
}
else if(s[i]=='.'&&s[i+1]=='.'&&i!=n-2)
{
    i++;
    cout<<0;
}
else if(s[i]=='.'&&s[i+1]=='.'&&i==n-2){
    cout<<0;
}
// else{
//     cout<<counter;
//     if(i==n-1&&s[i-1]!='.')
//     {
//         cout<<0;
//     }
//     if(s[i]=='.')
//     {counter=0;}
//     else{
//         counter=1;
//     }
    
// }

}
cout<<endl;
return 0;
}
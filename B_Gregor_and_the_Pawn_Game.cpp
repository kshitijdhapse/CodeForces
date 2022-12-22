#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
int n;
cin>>n;
string a;
string b;
cin>>a>>b;
int sum=0;
for(int i=0;i<n;i++)
{
    if(b[i]=='1'){
    if(a[i]=='0')
    {
        sum++;
    }
    else if(a[i]=='1')
    {
        if(a[i-1]=='1')
        {
            a[i-1]='0';
            sum++;
        }
        else if(a[i+1]=='1'){
            a[i+1]='0';
            sum++;
        }
    }
    } 
}
cout<<sum<<endl;
}
return 0;
}
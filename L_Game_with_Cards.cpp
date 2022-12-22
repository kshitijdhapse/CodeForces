#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int alice[n];
for(int i=0;i<n;i++)
{
  cin>>alice[i];  
}
int m;
cin>>m;
int bob[m];
for(int i=0;i<m;i++)
{
    cin>>bob[i];
}
int counterbob=0,counteralice=0;
sort(bob,bob+m);
sort(alice,alice+n);
for(int i=0;i<min(n,m);i++)
{
    if(bob[i]>alice[i])
{
    counterbob++;
}
else{
counteralice++;
}
}
if(n>m)
{
    counterbob+=n-counteralice;
}
else{
    counteralice+=n-counterbob;
}
cout<<counteralice<<" "<<counterbob<<endl;
if(counteralice>counterbob)
{
    cout<<"Alice"<<endl;
}
else{
    cout<<"Bob"<<endl;
}
if(counteralice>=counterbob)
{
    cout<<"Alice"<<endl;
}
else{
    cout<<"Bob"<<endl;
}
}
return 0;
}
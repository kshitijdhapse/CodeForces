#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
int n;
cin>>n;
int x=0,count=0;
while(n!=0){
    x=n;
    n=n/10;
    count++;
}
cout<<(9*(count-1))+x<<endl;
}
return 0;
}
#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
ll factorial(ll n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}
int main(){
ll n;
cin>>n;
ll sum=0;
ll c=(2*(n))-2;
if(n-4>0){
    sum=4*(((n-3)*(pow(3,2)*pow(4,n-4 )))+((2)*(pow(3,1)*pow(4,n-3))));
}
else if(n-4==0){
    sum+=((2)*(pow(3,1)*pow(4,n-3))+((1)*(pow(3,2)*pow(4,n-4))))*4;
}else{
    sum=((2)*(pow(3,1)*pow(4,n-3)))*4;
}
cout<<sum<<endl;
return 0;
}
#define ll long long int 
#include <bits/stdc++.h>
using namespace std;
int main(){
int n,a;
cin>>n>>a;
for(int i=1;i<=9;i++){
    if((n*i)%10==a){
        cout<<i<<endl;
        break;
    }
    if((n*i)%10==0||(n*i)%10==a){
        cout<<i<<endl;
        break;
    }
}
return 0;
}
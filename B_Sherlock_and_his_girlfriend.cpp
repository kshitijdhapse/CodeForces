#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
 
    return true;
}
int main(){
    int n;
    cin>>n;
    if(n>2){

    cout<<2<<endl;
    for(int i=2;i<=n+1;i++){
        if(isPrime(i)){
            cout<<1<<" ";
        }
        else{
            cout<<2<<" ";
        }
    }
    cout<<endl;
    }
    else if(n==1){
        cout<<1<<endl;
        cout<<1<<endl;
    }
    else{
        cout<<1<<endl;
        cout<<1<<" "<<1<<endl;
    }
return 0;
}
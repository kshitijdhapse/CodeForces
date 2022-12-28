#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
int n;
cin>>n;
if(n!=3){
    if(n%2==0){
    for(int i=0;i<n;i+=2){
        cout<<i+2<<" "<<i+1<<" ";
    }
    cout<<endl;
    }
    else if(n!=5){
        cout<<n<<" "<<n-1<<" "<<n-2<<" ";
        for(int i=0;i<n;i+=2){
            
            if(i<n-3)
            {
                //cout<<n<<" "<<n-2<<" "<<n-1<<endl;
                cout<<i+2<<" "<<i+1<<" ";
            }
        }
        cout<<endl;
    }
    else{
        cout<<"5 4 1 2 3"<<endl;
    }
}
else{
    cout<<-1<<endl;
}
}
return 0;
}
#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
int n;
cin>>n;
int count=0,a=0;
if(n!=2){
for(int i=1;i<=n;i++){
        if((((n*n)+1)/2)==a){
            for(int j=2;j<=n*n;j+=2){
                if(count<n) {cout<<j<<" ";}
                else{
                count=0;
                cout<<endl;
                cout<<j<<" ";
                }
                count++;
            
            }  
            break; 
        }
        else{
        for(int j=1;j<=n*n;j+=2){
            if(count<n) {cout<<j<<" ";}
            else{
                count=0;
                cout<<endl;
                cout<<j<<" ";
            }
                count++;
                a++;
            }
        }
    
}
cout<<endl;
}
else{
    cout<<-1<<endl;
}
}
return 0;
}
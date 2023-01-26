#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
    ll count=0;
for(int i=0;i<16;i++){
    for(int j=i;j<16;j++){
        for(int k=j;k<16;k++){
            for(int l=k;l<16;l++){
                for(int m=k;m<16;m++){
                  //  for(int n=m;n<16;n++){
                       // for(int o=n+2;o<16;o++){
            if(i+j+k+l+m==15){
                count++;
            }
                        }
                    }
               // }
           // }
}
}   
}
cout<<count<<endl;
}
return 0;
}
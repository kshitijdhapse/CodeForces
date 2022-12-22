#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
int m;
cin>>m;
string arr[2];
for(int i=0;i<2;i++){
        cin>>arr[i];
}
int one=0,two=0,three=0,count=0;
for(int i=0;i<2;i++){
    for(int j=0;j<m;j++){
        if(arr[i][j]=='B'){
            if(arr[i][j+1]=='B'){
                count++;
            }
            if(arr[i][j+1]=='B'){
                count++;
            }
            if(arr[i][j+1]=='B'){
                count++;
            }
            if(arr[i][j+1]=='B'){
                count++;
            }
            if(count==1){
                one++;
            }
            else if(count==2){
                two++;
            }
            else if(count==3){
                three++;
            }
            else{
                
            }
        }
    }
}
}
return 0;
}
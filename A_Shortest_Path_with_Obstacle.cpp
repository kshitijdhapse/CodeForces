#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
int x1,x2,x3,y1,y2,y3;
cin>>x1>>y1>>x2>>y2>>x3>>y3;
if(x1==x2&&x2==x3&&y3>min(y1,y2)&&y3<max(y1,y2)){
     cout<<abs(y1-y2)+2<<endl;
}
else if(y1==y2&&y2==y3&&x3>min(x1,x2)&&x3<max(x1,x2)){
     cout<<abs(x1-x2)+2<<endl;
}
else{
    cout<<abs(y1-y2)+abs(x1-x2)<<endl;
}
}
return 0;
}
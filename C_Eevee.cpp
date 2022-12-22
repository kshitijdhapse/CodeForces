#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
string s;
cin>>s;
int count=0,max=0,index;
string arr[6]={"jolteon","glaceon","leafeon","flareon", "umbreon","sylveon"};
if(s.length()==8){
    cout<<"vaporeon"<<endl;
}
else if(s.length()==6){
    cout<<"espeon"<<endl;
}
else if(s.length()==7){
    for(int i=0;i<6;i++){
        for(int j=0;j<4;j++){
            if(arr[i][j]==s[j]){
                count++;
            }
        }
    if(max<count){
        max=count;
        count=0;
        index=i;
    }
    }
    cout<<arr[index]<<endl;
}
return 0;
}
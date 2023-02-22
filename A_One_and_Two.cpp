#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
int n;
cin>>n;
ll arr[n];
ll mul=-1,mul2=1,two=0,two1=0;
for(int i =0;i<n;i++){
    cin>>arr[i];
    if(arr[i]==2){
        two++;
    }
}
if(two%2==1){
    cout<<-1<<endl;
}
else{
    for(int i=0;i<n;i++){
        if(arr[i]==2){
            two1++;
        }
        if(two1==two/2)
    {
        mul=i;
        break;
    }
    }
    cout<<mul+1<<endl;
}

}
return 0;
}
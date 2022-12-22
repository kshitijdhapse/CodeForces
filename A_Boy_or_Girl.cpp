#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){

string a;
cin>>a;
unordered_map<int,int> mp;
for(int i=0;i<a.length();i++){
    mp[a[i]]++;
}
if(mp.size()%2==0){
    cout<<"CHAT WITH HER!"<<endl;
}
else{
    cout<<"IGNORE HIM!"<<endl;
}

return 0;
}
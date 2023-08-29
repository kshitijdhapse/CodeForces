#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    map<string,int> mp;
    for(int j=0;j<n;j++){
    string arr[2];
    for(int i=0;i<2;i++){
        cin>>arr[i];
    }
    if(arr[1]=="yes"){
    mp[arr[0]]++;
    ll y;
    cin>>y;
    string a;
    for(int i=0;i<y;i++){
        cin>>a;
        mp[a]++;
    }
    }
}
cout<<mp.size()<<endl;
}
return 0;
}
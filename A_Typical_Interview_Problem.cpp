#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        //this is the longest string i ve seen
        string s2="FBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFB";
        string a;
        cin>>a;
        int in=-1;
        if (s2.find(a) != string::npos){
            in=1; 
        }
        if(in==-1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
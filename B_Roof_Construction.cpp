#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int two=log2(n);
        two=pow(2,two);
        if((n&(n-1))==0){
            two=two/2;
        }
        if(n!=2){
        for(int i=1;i<n;i++){
            if(i==two){
                cout<<0<<" "<<i<<" ";
            }
            else{
            cout<<i<<" ";
            }
        }
        cout<<endl;
        }
        else{
            cout<<1<<" "<<0<<endl; 
        }
        
    }
    return 0;
}
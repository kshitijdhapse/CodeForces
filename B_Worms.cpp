
#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int> v;
    int sum=0,a;
    for(int i=0;i<n;i++){
        cin>>a;
        sum+=a;
        v.push_back(sum);
        cout<<v[i]<<" ";
    }
    cout<<"\n";
}
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define testcase int t;cin>>t;while(t--)
#define forloop(start,size) for(int i=start;i<size;i++)
#define all(v) v.begin(),v.end()
#define foreachx(v) for(auto&x:v)
#define maxofvec(v) *max_element(v.begin(),v.end())
#define minofvec(v) *min_element(v.begin(),v.end())
#define M 1000000007

void D(){
    int n,j;

    cin>>n>>j;
    string s;
    cin>>s;
    int a = 0;
    while(a<j){
        if(j==n){
            cout<<"JAY\n";
            return;
        }else if(s[j+1]=='#'){
            j++;
            a+=2;
        }else{
            j++;
            a++;
        }
    }
    cout<<"JEFF\n";
}

signed main(){
    
    testcase{
        D();
    }
    
    return 0;
}
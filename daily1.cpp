#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int> arr;
        string s;
        cin>>s;
        int j=0;
        string a="";
        for(int i=0;i<s.length();i++){
            if(s[i]=='/'){
                arr.push_back(stoi(a));
                a="";
            }
            else{
                a+=s[i];
                if(i==s.length()-1){
                    arr.push_back(stoi(a));
                    a="";
                }
            }
        }
        for(int i=0;i<m;i++){
            int x;
            cin>>x;
            arr.push_back(x);
        }
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]!=arr[i+1]){
            cout<<arr[i]<<"/";
            }
        }
        cout<<arr[arr.size()-1]<<endl;
    }
    return 0;
}

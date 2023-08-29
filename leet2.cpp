#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
    
}
return 0;
}
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int,int>> s;
        int m=0,in=0,value=0;
        vector<int> v;
        for(int i=0;i<temperatures.size();i++){
            v.push_back(0);
        }
        // fill(v.begin(), v.end(), value);
        for(int i=0;i<temperatures.size();i++){
            if(s.empty()){
                pair<int,int> a;
                a.first=temperatures[i];
                a.second=i;
                s.push(a);
            }
            else if(s.top().first<temperatures[i]){
                pair<int,int> b;
                b.first=temperatures[i];
                b.second=i;
                while(s.top().first<temperatures[i]){
                pair<int,int> a;
                a=s.top();
                s.pop();
                v[a.second]=i-a.second;
                }
                pair<int,int> b;
                b.first=temperatures[i];
                b.second=i;
                s.push(b);
            }else{
                pair<int,int> a;
                a.first=temperatures[i];
                a.second=i;
                s.push(a);
            }
        }
        return v;
    }
};
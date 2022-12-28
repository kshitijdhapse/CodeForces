#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
string s2;
cin>>s2;
int n=s2.length();
transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
for(int i=0;i<n;i++){
    if(s2[i]!='a'&&s2[i]!='u'&&s2[i]!='y'&&s2[i]!='o'&&s2[i]!='i'&&s2[i]!='e'){
        cout<<'.'<<s2[i];
    }
}
return 0;
}
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    char s[90];
    gets(s);
    for(int i=0;i<n;i++){
        if(s[i]>='A'&&s[i]<='Z'){
            cout<<char(int(s[i])+32);
        }
        else{
            cout<<s[i];
        }
    }
    // cout<<" ";
    // cin>>s;
    // n=s.length();
    // for(int i=0;i<n;i++){
    //     if(s[i]>='A'&&s[i]<='Z'){
    //         cout<<char(int(s[i])+32);
    //     }
    //     else{
    //         cout<<s[i];
    //     }
    // }
    return 0;
}
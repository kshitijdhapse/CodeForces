#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
string houses;
cin>>houses;
int n = houses.length();
for(int i = 0; i < n; i++){
    if(houses[i]!='a'&&houses[i]!='e'&&houses[i]!='i'&&houses[i]!='o'&&houses[i]!='u'&&houses[i]!='A'&&houses[i]!='E'&&houses[i]!='I'&&houses[i]!='O'&&houses[i]!='U'){
        cout<<houses[i];
    }
}
return 0;
}
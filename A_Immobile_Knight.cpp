#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b;
        cin>>a>>b;
        if(a==1||b==1)
        {
            cout<<a<<" "<<b<<endl;
        }
        else if(b<=3&&a<=3)
        {
            cout<<2<<" "<<2<<endl;
        }
        else{
            cout<<a<<" "<<b<<endl;
        }
	     
	}
	return 0;
}

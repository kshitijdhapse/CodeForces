#include <iostream>
using namespace std;

int main() {
    string s;
    char a;
    cin>>s;
    int n=s.length();
            a=s[n-1];
    for(int i=n-1;i<=0;i++)
    {

        if(s[i-1]>a)
        {    
            s[i]=s[i-1]+1;
            s[i-1]=a;
        }
        else{
            a=s[i-1];
        }
    }
    cout<<s<<endl;
	return 0;
}

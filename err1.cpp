#include <iostream>

using namespace std;

int main()
{
    int c,a,b,t;
 for(int t=0;t<9;t++) 
   { 
    cin>>a;
    cin>>b;
    cin>>c;
    if(c>1 && a%c==0 && b%c==0)
    {
        cin>>a,b,c;
        cout<<a;
        cout<<"\t";
        cout<<b;
        cout<<"\t";
        cout<<c;
        cout<<"\t";
      cout<<"YES";  
      cout<<"\n";
    }
    else
     {
         cout<<"NO";
     }
     } 
    return 0;
}
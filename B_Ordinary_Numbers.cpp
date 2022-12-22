#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,a=-1,rem=0,counter=1,length=0,sum=0;
        cin>>n;
            int j=n;
            while(j!=0)
            {
                rem=j%10;
                j=j/10;
                a=rem;
                length++;
            }
            for(int i=0;i<length;i++)
            {
                sum=10*sum+a;
            }

       // cout<<a<<" "<<length<<" "<<sum<<endl;
        
        if(sum<=n&&length!=1)
        {
            cout<<9*(length-1)+a<<endl;
        }
        else if(length==1)
        {
            cout<<a<<endl;
        }
        else{
            cout<<9*(length-1)+a-1<<endl;
        }
	}
	return 0;
}

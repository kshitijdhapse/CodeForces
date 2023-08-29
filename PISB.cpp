#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


ll columnsinithrow(ll i , ll n){
    if(i >= (n/2 - 1)){
        return (2*i + 1);
    }
    else if(i >= (n/2 + 2)){
        return n;
    }
    ll rows = 3 + (n/2) - 1 + (n/2) - 1;


    ll num = rows - i + 1;


    return (2*num + 1);
}


ll columnsinithroweven(ll i , ll n){
    if(i >= (n/2 - 1)){
        return (2*i);
    }
    else if(i >= (n/2 + 2)){
        return n;
    }
    ll rows = 3 + (n/2) - 1 + (n/2) - 1;


    ll num = rows - i + 1;


    return (2*num);
}
int main(){
    // taking the testcases


    ll t;
    cin>>t;
    while(t--){
        ll n; // the length of the longest 3 sides that come together at the middle
        ll rowcoord , colcoord;
        cin>>n;


        // input about the location of bishop / person / whatever problem statement


        cin >> rowcoord >> colcoord;
        ll rows , cols;
        ll answer1 = (n/2 - 1) + 3;
        ll answer2 = answer1 - 1;
        if(n % 2 != 0){
            // total rows
            rows = 3 + (n/2) - 1 + (n/2) - 1;
           
            if(rowcoord == (n/2 + 1)){
                if(colcoord % 2 == 0){
                    cout<<(2*answer1 - 1)<<endl; continue;
                }
                else{
                    cout<<(2*answer2 - 1)<<endl; continue;
                }
            }
            else{
                if((colcoord == 1) || (colcoord == columnsinithrow(rowcoord , n))){
                    cout<<(answer1 + (n/2 - 1))<<endl; continue;
                }
                else{
                    if(colcoord % 2 == 0){
                        cout<<(2*answer2 - 1)<<endl; continue;
                    }
                    else{
                        cout<<(2*answer1 - 1)<<endl; continue;
                    }
                }
            }
        }
        else{
            ll answer = (n/2 - 1) + 2;


            if(rowcoord == (n/2 + 1)){
                cout<<(2*answer - 1)<<endl; continue;
            }
            else{
                if((colcoord == 1) || (colcoord == columnsinithroweven(rowcoord , n))){
                    cout<<(answer + (n/2 - 1))<<endl; continue;
                }
                else{
                    cout<<(2*answer - 1)<<endl; continue;
                }
            }
        }
    }
    return 0;
}

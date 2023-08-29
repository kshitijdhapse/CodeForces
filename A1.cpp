#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool itsoutsideeven(ll n , ll x , ll y){
    if((x < 1) || (x > (n-1))){
        return true;
    }
    ll mid = (n/2);
    if(x <= mid){
        ll j = (2*x);
        if((y < 1) || (y > j)){
            return true;
        }
    }
    else{
        ll j = n + (2*mid) - (2*x);
        if((y < 1) || (y > j)){
            return true;
        }
    }
    return false;
}
bool itsoutsideodd(ll n , ll x , ll y){
    if((x < 1) || (x > n)){
        return true;
    }
    ll mid = (n/2) + 1;
    if(x <= mid){
        ll j = (2*x) - 1;
        if((y < 1) || (y > j)){
            return true;
        }
    }
    else{
        ll j = n + (2*mid) - (2*x);
        if((y < 1) || (y > j)){
            return true;
        }
    }
    return false;
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll x,y;
        cin>>x>>y;
        // is it inside or outside the board

        // top row has 1 column and no. of columns increase by 2 from that column upto n

        if(n % 2 == 0){
            if(itsoutsideeven(n,x,y)){
                cout<<-1<<endl; continue;
            }
            else{
                cout<<(n-1)<<endl; continue;
            }
        }
        else{
            if(itsoutsideodd(n , x , y)){
                cout<<-1<<endl; continue;
            }
            if(y % 2 != 0){
                cout<<n<<endl; continue;
            }
            else{
                cout<<(n-2)<<endl; continue;
            }
        }
    }
    return 0;
}
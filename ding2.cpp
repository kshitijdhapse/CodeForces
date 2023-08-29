#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
class Test{
    int a;
    public:
    void set(int x){
        a=x;
    }
    void show(){
        cout<<a<<" ";
    }
    void display(Test ob){
        this->show();
        ob.show();
    }
};
int main(){
    Test ob1,ob2;
    ob1.set(3);
    ob2.set(5);
    ob1.display(ob2);
return 0;
}
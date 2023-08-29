#define ll long long int 
#include<iostream>
using namespace std;
void test (int x){
    try{
        if(x==1){
            throw 'x';
        }
        if(x==2){
            throw '1';
        }
        if(x==3){
            // throw '1.0';
        }
    }
    catch(int a){
        cout<<"INTERGER ";
    }
    catch(...){
        cout<<"exx";
    }
}
int main(){
    test(1);
    test(2);
return 0;
}
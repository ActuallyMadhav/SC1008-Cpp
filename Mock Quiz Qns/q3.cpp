#include <iostream>
using namespace std;

class A{
    public:
        void func(){
            cout << "FA";
        }
};

class B: public A{
    public:
        void func(){
            cout << "FB";
        }
};

class C: public B{
    public:
        void func(){
            cout << "FC";
        }
};

int main(){
    C c;
    A a=c;
    a.func();
    return 0;
}
#include <iostream>
using namespace std;

class AA{
    public:
        virtual void func() = 0;
        AA(){
            cout << "AA";}            
};

class BB: public AA{
    public:
        void func(){
            cout << "BB";
        }
};

int main(){
    AA *a;
    BB bobj;
    a = &bobj;
    a->func();
}
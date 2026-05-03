#include<iostream>
using namespace std;


class Base
{
    public:
        int i,j;
        Base()
        {
            cout<<"Inside base constructor\n";
            i = 0;
            j = 0; 
        }
        ~Base()
        {
            cout<<"Inside base destructor\n";
        }
        void fun()
        {
            cout<<"Inside fun\n";
        }

};

class Derived: public Base 
{
    public:
        int x;

        Derived()
        {
            cout<<"Inside derived constructor\n";
            x = 0;
        }

        ~Derived()
        {
            cout<<"Inside derived destructor\n";
        }

        void gun()
        {
            cout<<"Inside gun\n";
        }
};

class DerivedX : public Derived
{
    public:
        int y;

        DerivedX()
        {
            cout<<"Inside derivedx constructor\n";
            y = 0;
        }
        ~DerivedX()
        {
            cout<<"Inside derivedx destructor\n";
        }
        void sun()
        {
            cout<<"Inside sun";
        }
};
int main()
{
    cout<<"Inside main\n";

    Base bobj;
    Derived dobj;
    DerivedX dobjx;

    cout<<"Size of base is:"<<sizeof(Base)<<"\n";          //8
    cout<<"Size of derived is:"<<sizeof(Derived)<<"\n";    //12
    cout<<"Size of derivedx is:"<<sizeof(DerivedX)<<"\n";    //16

    cout<<dobjx.i<<"\n";       //0
    cout<<dobjx.j<<"\n";       //0
    cout<<dobjx.x<<"\n";       //0
    cout<<dobjx.y<<"\n";       //0

    dobjx.fun();
    dobjx.gun();
    dobjx.sun();

    cout<<"End of main\n";

    return 0;
}
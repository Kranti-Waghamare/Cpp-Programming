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
int main()
{
    cout<<"Inside main\n";

    Base bobj;
    Derived dobj;

    cout<<"Size of base is:"<<sizeof(Base)<<"\n";          //8
    cout<<"Size of derived is:"<<sizeof(Derived)<<"\n";    //12

    cout<<dobj.i<<"\n";       //0
    cout<<dobj.j<<"\n";       //0
    cout<<dobj.x<<"\n";       //0
    dobj.fun();

    cout<<"End of main\n";

    return 0;
}
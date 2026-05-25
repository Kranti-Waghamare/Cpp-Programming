#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;
};   //8Bytes

class Derived : public Base
{
    public:
        int x,y;
};   //16 Bytes

int main()
{
    Base *bp = NULL;
    
    bp = new Derived();           //Upcasting

    return 0;
}
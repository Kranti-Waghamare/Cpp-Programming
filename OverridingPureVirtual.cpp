#include<iostream>
using namespace std;

class Base
{
    public:
        int i ,j;

        int  Add(int a, int b)     //1000
        {
            return a+b;
        }

        virtual int Sub(int a, int b)=0;
};

class Derived : public Base
{
    public:
        int x,y;
        
        int Mult(int a, int b)     //2000
        {
            return a*b;
        }

        int Sub(int a, int b)      //3000
        {
            return a-b;
        }
};

int main()
{
   // Base bobj;

    Derived dobj;

    return 0;
}
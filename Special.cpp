#include <iostream>
using namespace std;

class Demo
{
    public:
          int i;        //characteristics 
          float f;       //characteristics
          
          Demo()         //constructor
          {
            cout<<"Inside constructor";
            i = 0;
            f = 0.0f;
          }

          ~Demo()         //destructor
          {
            cout<<"Inside destructor\n";
          }

          void fun()      // Behavior
          {
            cout<<"inside fun \n";
          }
};

int main()
{
    cout<<"Inside main\n";

    Demo dobj;        //Object creation
    
    cout<<"\n"<<dobj.i<<"\n";


    dobj.fun();

    cout<<"End main\n ";

    return 0;
}
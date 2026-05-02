#include<iostream>
using namespace std;

//Encapsulation
class Marvellous
{
    //Access specifier
    public:
    int No1, No2;    //Characteristics
     
    // Default constructor
    Marvellous()
    {
        cout<<"Inside default constructor\n";
        No1 = 0;
        No2 = 0;
    }

    // Parameterised constructor
    Marvellous(int A, int B)
    {
        cout<<"Inside Parameterised constructor\n";
        No1 = A;
        No2 = B;
    }


    // Copy constructor 
    Marvellous(Marvellous &ref)
    {
        cout<<"Inside Copy constructor\n";
        No1 = ref.No1;
        No2 = ref.No2;
    }

    // Destructor 
    ~Marvellous()
    {
        cout<<"Inside destructor\n";
    }
};



int main()
{
    cout<<"Inside main\n";
    Marvellous mobj1;           //default constructor
    Marvellous mobj2(11,21);      //Parameterised constructor
    Marvellous mobj3(mobj2);      //copy constructor
    
    cout<<"End of main\n";

    return 0;

}     // All destructors gets called  
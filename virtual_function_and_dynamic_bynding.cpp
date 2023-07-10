#include<iostream>
using namespace std;

class base
{
    public :
        virtual void print()
        {
            cout << "Base" << endl;
        }
};

class derive : public base
{
    public :
        void print()
        {
            cout << "Derive" << endl;
        }
};

int main()
{
//    base b;
//    derive d;
//    b.print();
//    d.print();

//    base b;
//    base *ptr;
//    ptr = &b;
//    ptr -> print();

//    derive d;
//    ptr = &d;
//    ptr -> print();

    base b;
    base *ptr;
    ptr = &b;

    (*ptr).print();



    return 0;
}

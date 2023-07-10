#include<iostream>
using namespace std;

class base
{
    public:
        virtual void display()=0;
        void output()
        {
            cout << "hello" << endl;
        }

};

class derived : public base
{
    public:
        void display()
        {
        cout << "Derived is called" << endl;
        }
};

int main()
{
    // we can't create an object for base call or abstract class
    // but we can create a pointer for base class
    base  *ptr;
    ptr ->output();

    derived d;
    ptr = &d;
    ptr->display();

    return 0;
}

#include<iostream>
using namespace std;

class base
{
    private:
        int a;

    public:
         void getdata(int a)
         {
            this-> a = a;
         }
         void output()
         {
             cout << a << endl;
         }
};

int main()
{
//    base b;
//
//    b.getdata(10);
//    b.output();

    base *ptr,b;

    ptr = &b;
    ptr -> getdata(10);
    ptr -> output();

    return 0;
}

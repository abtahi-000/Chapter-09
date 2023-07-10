#include<iostream>
using namespace std;

class base
{
    private:
        int a,b;
    public:
        void getdata(int x,int y)
        {
            a = x;
            b = y;
        }
        void output()
        {
            cout << a << " " << b;
        }
};

int main()
{
    base *ptr,b;

    ptr = &b;
    (*ptr).getdata(10,20);
    (*ptr).output();

    return 0;
}

#include<iostream>
using namespace std;

class A
{
    private:
        int x = 200;
    public:
        void display(int y)
        {
            cout << y << endl;
        }
        friend class B;
};

class B
{
    public:
        void display(A obj)
        {
            cout << obj.x << endl;
        }
};

int main()
{
    A obj1;
    obj1.display(100);

    B obj2;
    obj2.display(obj1);
    return 0;
}

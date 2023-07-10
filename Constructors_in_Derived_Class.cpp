#include<iostream>
using namespace std;

class alpha
{
    private :
        int x;
    public :
//        alpha( )
//        {
//            x = 0;
//        }
        alpha (int x1)
        {
            x = x1 ;
        }
        void displayalpha()
        {
            cout << x << " " << endl;
        }
};

class beta
{
    private:
        int y;
    public:
        beta()
        {
            y = 0;
        }
        beta(int y1)
        {
            y = y1;
        }
        void displaybeta()
        {
            cout << y << endl;
        }
};

class gamma : public alpha, public beta
{
    private:
        int m,n;
    public:
        gamma(int a,int b,int c,int d) : alpha(a),beta(b)
        {
            m = c;
            n = d;
        }
    void displaygamma()
    {
        cout << m << " " << n << endl;
    }
};

int main()
{
    gamma g(10,20,30,40);

    g.displayalpha(); // <-----notice
    g.displaybeta(); // <---------------notice
    g.displaygamma();

    return 0;
}

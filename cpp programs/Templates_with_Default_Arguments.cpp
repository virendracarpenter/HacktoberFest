#include <iostream>
using namespace std;
template <class T1 = int, class T2 = float, class T3 = char>
class Bhupen
{
public:
    T1 a;
    T2 b;
    T3 c;
    Bhupen(T1 x, T2 y, T3 z)
    {
        a = x;
        b = y;
        c = z;
    }
    void display()
    {
        cout << "Value of a is " << a << endl;
        cout << "Value of b is " << b << endl;
        cout << "Value of c is " << c << endl;
    }
};
int main()
{
    Bhupen<> Bhp(50, 20.5, 'B');
    Bhp.display();
    return 0;
}
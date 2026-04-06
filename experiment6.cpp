#include <iostream>
using namespace std;
class Demo
{
private:
    int num1, num2;
public:
    Demo(int x, int y)
    {
        num1 = x;
        num2 = y;
    }

    friend void display(Demo d);
};

void display(Demo d)
{
    cout << "First Value: " << d.num1 << endl;
    cout << "Second Value: " << d.num2 << endl;
    cout << "Addition: " << d.num1 + d.num2 << endl;
}

int main()
{
    Demo d1(10, 20);
    display(d1);
    return 0;
}

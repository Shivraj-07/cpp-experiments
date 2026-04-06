#include <iostream>
#include <string>
using namespace std;

class Figure
{
public:
    virtual void calculateArea() = 0;
    virtual void calculatePerimeter() = 0;
};
class Rect : public Figure
{
private:
    double l, w;

public:
    void input()
    {
        cout << "Enter length: ";
        cin >> l;
        cout << "Enter width: ";
        cin >> w;
    }

    void calculateArea()
    {
        cout << "Rectangle Area = " << l * w << endl;
    }

    void calculatePerimeter()
    {
        cout << "Rectangle Perimeter = " << 2 * (l + w) << endl;
    }
};
class Circ : public Figure
{
private:
    double r;

public:
    void input()
    {
        cout << "Enter radius: ";
        cin >> r;
    }

    void calculateArea()
    {
        cout << "Circle Area = " << 3.14 * r * r << endl;
    }

    void calculatePerimeter()
    {
        cout << "Circle Circumference = " << 2 * 3.14 * r << endl;
    }
};

int main()
{
    Rect r1;
    Circ c1;

    cout << "--- Rectangle ---\n";
    r1.input();
    r1.calculateArea();
    r1.calculatePerimeter();

    cout << "\n--- Circle ---\n";
    c1.input();
    c1.calculateArea();
    c1.calculatePerimeter();

    return 0;
}

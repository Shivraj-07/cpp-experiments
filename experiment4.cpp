#include <iostream>
using namespace std;

class SimpleCalc
{
private:
    double num1, num2;
public:
    void setValues(double v1, double v2)
    {
        num1 = v1;
        num2 = v2;
    }
    inline double sum() { return num1 + num2; }
    inline double diff() { return num1 - num2; }
    inline double prod() { return num1 * num2; }
    inline double quotient()
    {
        if (num2 != 0)
            return num1 / num2;
        else
        {
            cout << "Division by zero not allowed!\n";
            return 0;
        }
    }
};
int main()
{
    SimpleCalc sc;
    double n1, n2;
    cout << "Enter two numbers: ";
    cin >> n1 >> n2;
    sc.setValues(n1, n2);
    cout << "\nAddition: " << sc.sum();
    cout << "\nSubtraction: " << sc.diff();
    cout << "\nMultiplication: " << sc.prod();
    cout << "\nDivision: " << sc.quotient();

    return 0;
}

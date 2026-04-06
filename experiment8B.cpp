#include <iostream>
#include <string>
using namespace std;
class Person
{
protected:
    int id;
    string name;

public:
    void inputBasic()
    {
        cout << "Enter Roll Number: ";
        cin >> id;

        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, name);
    }
};

class Result : public Person
{
private:
    float score[5];
    float sum = 0;

public:
    void inputMarks()
    {
        sum = 0;
        for (int i = 0; i < 5; i++)
        {
            cout << "Enter marks for subject " << i + 1 << ": ";
            cin >> score[i];
            sum += score[i];
        }
    }

    void showResult()
    {
        cout << "\n=== Student Details ===\n";
        cout << "Roll No: " << id << endl;
        cout << "Name: " << name << endl;

        cout << "Marks: ";
        for (int i = 0; i < 5; i++)
        {
            cout << score[i] << " ";
        }

        cout << "\nTotal: " << sum << endl;
        cout << "Percentage: " << (sum / 5) << "%\n";
    }
};

int main()
{
    Result r;
    r.inputBasic();
    r.inputMarks();
    r.showResult();

    return 0;
}

#include <iostream>
#include <string>
using namespace std;

class Staff
{
protected:
    int id;
    string name;
    double salary;

public:
    void inputBasic()
    {
        cout << "Enter Employee ID: ";
        cin >> id;

        cin.ignore();
        cout << "Enter Employee Name: ";
        getline(cin, name);

        cout << "Enter Basic Salary: ";
        cin >> salary;
    }
};
class Section : public Staff
{
protected:
    string sectionName;

public:
    void inputSection()
    {
        cin.ignore();
        cout << "Enter Department Name: ";
        getline(cin, sectionName);
    }
};
class ProvidentFund : public Section
{
private:
    double pf;

public:
    void computePF()
    {
        pf = salary * 0.12;
    }

    void showPF()
    {
        cout << "\n=== Employee PF Details ===\n";
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Department: " << sectionName << endl;
        cout << "Salary: " << salary << endl;
        cout << "PF (12%): " << pf << endl;
    }
};

class Assignment : public Staff
{
private:
    string project;

public:
    void inputProject()
    {
        cin.ignore();
        cout << "Enter Project Name: ";
        getline(cin, project);
    }

    void showProject()
    {
        cout << "\n=== Employee Project Details ===\n";
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Project: " << project << endl;
    }
};

int main()
{
    ProvidentFund e1;
    cout << "--- Enter Details for PF Calculation ---\n";
    e1.inputBasic();
    e1.inputSection();
    e1.computePF();
    e1.showPF();

    Assignment e2;
    cout << "\n--- Enter Details for Project ---\n";
    e2.inputBasic();
    e2.inputProject();
    e2.showProject();

    return 0;
}

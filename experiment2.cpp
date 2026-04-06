#include <iostream>
using namespace std;

class StudentRecord
{
private:
    int rno, subjectCount;
    string studentName, division;
    float scores[10];
    float sumMarks = 0;
    float percent = 0;

public:
    void inputDetails()
    {
        cout << "\nEnter Roll Number: ";
        cin >> rno;

        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, studentName);

        cout << "Enter Division: ";
        getline(cin, division);

        cout << "Enter total subjects: ";
        cin >> subjectCount;

        sumMarks = 0;

        for (int i = 0; i < subjectCount; i++)
        {
            cout << "Marks for subject " << i + 1 << ": ";
            cin >> scores[i];
            sumMarks += scores[i];
        }
    }

    void findPercentage()
    {
        if (subjectCount != 0)
            percent = sumMarks / subjectCount;
    }

    void printDetails()
    {
        cout << "\nRoll No: " << rno;
        cout << "\nName: " << studentName;
        cout << "\nDivision: " << division;
        cout << "\nTotal Marks: " << sumMarks;
        cout << "\nPercentage: " << percent << "%\n";
    }
};

int main()
{
    int count;
    cout << "Enter number of students: ";
    cin >> count;

    StudentRecord list[10];

    for (int i = 0; i < count; i++)
    {
        cout << "\n--- Details of Student " << i + 1 << " ---";
        list[i].inputDetails();
        list[i].findPercentage();
        list[i].printDetails();
    }

    return 0;
}

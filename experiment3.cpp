#include <iostream>
using namespace std;

class HospitalPatient
{
private:
    int id;
    string name;
    double amount;
    string date;

public:
    HospitalPatient()
    {
        id = -1;
        name = "No Name";
        amount = 0;
        date = "N/A";
    }
    HospitalPatient(int pid, string pname, double bill, string appDate)
    {
        id = pid;
        name = pname;
        amount = bill;
        date = appDate;
    }

    HospitalPatient(const HospitalPatient &obj)
    {
        id = obj.id;
        name = obj.name;
        amount = obj.amount;
        date = obj.date;
    }

    void show()
    {
        cout << "\nPatient ID: " << id;
        cout << "\nName: " << name;
        cout << "\nBill: Rs. " << amount;
        cout << "\nAppointment: " << date << endl;
    }
};

int main()
{
    HospitalPatient a;
    cout << "\n--- Default Details ---";
    a.show();
    HospitalPatient b(101, "Rahul Patil", 3500.50, "15-02-2026");
    cout << "\n--- Given Details ---";
    b.show();
    HospitalPatient c(b);
    cout << "\n--- Copied Details ---";
    c.show();

    return 0;
}

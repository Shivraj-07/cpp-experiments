#include <iostream>
#include <iomanip>
using namespace std;

class RestaurantBill
{
private:
    int table_id, item_count;
    string name;
    long long phone;
    double amount = 0, disc = 0, finalAmount = 0;

public:
    void inputCustomer()
    {
        cout << "Enter Table Number: ";
        cin >> table_id;

        cin.ignore();
        cout << "Enter Customer Name: ";
        getline(cin, name);

        cout << "Enter Customer Contact Number: ";
        cin >> phone;
    }

    void inputItems()
    {
        cout << "\nEnter Number of Items Ordered: ";
        cin >> item_count;

        int quantity;
        double rate;

        for (int i = 0; i < item_count; i++)
        {
            cout << "\nEnter Quantity for Item " << i + 1 << ": ";
            cin >> quantity;

            cout << "Enter Price for Item " << i + 1 << ": ";
            cin >> rate;

            amount = amount + (quantity * rate);
        }
    }

    void computeBill()
    {
        if (amount >= 2000)
        {
            disc = amount * 0.20;
        }
        else if (amount >= 1000)
        {
            disc = amount * 0.10;
        }
        else
        {
            disc = 0;
        }

        finalAmount = amount - disc;
    }

    void showBill()
    {
        cout << "\n========== HOTEL BILL ==========\n";
        cout << "Table Number : " << table_id << endl;
        cout << "Customer Name : " << name << endl;
        cout << "Contact : " << phone << endl;

        cout << fixed << setprecision(2);
        cout << "Total : Rs. " << amount << endl;
        cout << "Discount : Rs. " << disc << endl;
        cout << "Amount to Pay : Rs. " << finalAmount << endl;
    }
};

int main()
{
    RestaurantBill obj;

    obj.inputCustomer();
    obj.inputItems();
    obj.computeBill();
    obj.showBill();

    return 0;
}

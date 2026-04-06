#include <iostream>
using namespace std;

class Learner
{
private:
    static int totalStudents;

public:
    // Constructor increments count
    Learner()
    {
        totalStudents++;
    }

    // Static function to display count
    static void displayTotal()
    {
        cout << "Number of student objects created: " << totalStudents << endl;
    }
};

// Initialize static variable
int Learner::totalStudents = 0;

int main()
{
    Learner obj1;
    Learner obj2;
    Learner obj3;

    // Calling static function
    Learner::displayTotal();

    return 0;
}

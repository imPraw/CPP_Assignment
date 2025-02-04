#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

class Employee
{
private:
    string name{};
    int employeeID;
    int salary;

public:
    Employee(string n, int e, int s)
    {
        this->name = n;
        this->employeeID = e;
        this->salary = s;

        cout << name << "'s employeeID is " << employeeID << " and salary is " << salary << endl;
    }
    int perform(float perRate)
    {
        salary = salary * perRate;
        return salary;
    }
};

int main()
{
    Employee Praw("Pratyush", 1, 100000);
    int m;
    Employee Luf("Luffy", 2, 90000);
    cout << "What is the performance rating of praw" << endl ;
    cin >> m;
    cout << "The final salary of Pratyush is " << Praw.perform(m);
}

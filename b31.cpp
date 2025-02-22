#include <iostream>
#include <string>

class Employee {
    std::string name;
    int employeeID;
    double salary;

public:
    Employee(std::string n, int id, double s) : name(n), employeeID(id), salary(s) {}
    void setSalary(double performanceFactor) {
        salary *= performanceFactor;
    }
    void display() {
        std::cout << "Name: " << name << "\nID: " << employeeID << "\nSalary: " << salary << std::endl;
    }
};

int main() {
    Employee emp("Levy Ackerman", 12345, 50000);
    emp.setSalary(1.1);
    emp.display();
    return 0;
}

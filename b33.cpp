#include <iostream>
#include <string>

class Student {
    std::string name, studentClass;
    int rollNumber;
    double marks;

    char calculateGrade() {
        if (marks >= 90) return 'A';
        if (marks >= 80) return 'B';
        if (marks >= 70) return 'C';
        if (marks >= 60) return 'D';
        return 'F';
    }

public:
    Student(std::string n, std::string c, int roll, double m) : name(n), studentClass(c), rollNumber(roll), marks(m) {}
    void display() {
        std::cout << "Name: " << name << "\nClass: " << studentClass << "\nRoll Number: " << rollNumber
                  << "\nMarks: " << marks << "\nGrade: " << calculateGrade() << std::endl;
    }
};

int main() {
    Student s("Nick", "10th", 25, 85);
    s.display();
    return 0;
}

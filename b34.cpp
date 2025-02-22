#include <iostream>

class Triangle {
    double side1, side2, side3;

public:
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}
    
    std::string getType() {
        if (side1 == side2 && side2 == side3) return "Equilateral";
        if (side1 == side2 || side2 == side3 || side1 == side3) return "Isosceles";
        return "Scalene";
    }
    
    void display() {
        std::cout << "Triangle Type: " << getType() << std::endl;
    }
};

int main() {
    Triangle t(3, 3, 3);
    t.display();
    return 0;
}

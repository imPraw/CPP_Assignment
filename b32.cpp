#include <iostream>

class Date {
    int day, month, year;

    bool isValidDate(int d, int m, int y) {
        if (m < 1 || m > 12 || d < 1 || y < 1) return false;
        int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        if (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0)) daysInMonth[2] = 29;
        return d <= daysInMonth[m];
    }

public:
    void setDate(int d, int m, int y) {
        if (isValidDate(d, m, y)) {
            day = d;
            month = m;
            year = y;
        } else {
            std::cout << "Invalid date" << std::endl;
        }
    }
    void getDate() {
        std::cout << day << "/" << month << "/" << year << std::endl;
    }
};

int main() {
    Date date;
    date.setDate(29, 2, 2024);
    date.getDate();
    return 0;
}

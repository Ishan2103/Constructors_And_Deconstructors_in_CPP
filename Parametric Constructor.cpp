#include <iostream>
using namespace std;
class Date {
    int day, month, year;
public:
    // Parametric constructor
    Date(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }
    void showDate() {
        cout << day << "/" << month << "/" << year % 100 << endl;
    }
};
int main() {
    Date d1(03,9,2025);
    cout << "Date: ";
    d1.showDate();
    return 0;
}

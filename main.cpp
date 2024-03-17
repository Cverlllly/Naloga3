#include <iostream>

using namespace std;

#include "Date.h"

int main() {
    Date datum1 = Date(14, 6, 2004);
    Date datum2 = Date(25, 12, 2024);
    Date datum3 = Date(9, 3, 2003);
    Date datum4 = Date(29, 2, 2020);
    Date datum5 = Date(29, 2, 2004);

    cout << Date::isLeapYear(datum1.getYear()) << endl;
    cout << datum2.toString() << endl;
    cout << Date::getDaysInMonth(datum3.getMonth(), datum3.getYear()) << endl;
    cout << Date::isValidDate(datum5.getDay(), datum5.getMonth(), datum5.getYear()) << endl;
    cout << Date::isLeapYear(2020) << endl;
    return 0;
}

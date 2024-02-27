#include <iostream>
#include <string>

enum Week {
    Monday = 1,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};

struct Date {
    int day;
    int month;
    int year;
    Week DayOfWeek;
};

void PrintDate(const Date& date) {
    std::string dayNames[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    std::cout << "Date: " << date.day << '/' << date.month << '/' << date.year << std::endl;
    std::cout << "Day of the Week: " << dayNames[static_cast<int>(date.DayOfWeek) - 1] << std::endl;
}

int main() {
    Date date;
    date.day = 28;
    date.month = 3;
    date.year = 2024;
    date.DayOfWeek = Monday;

    PrintDate(date);

    return 0;
}

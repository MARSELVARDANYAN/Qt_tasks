//Enums and Structs

#include <iostream>

enum WEEK{
    Monday = 1,
    Tuesday, 
    Wednesday, 
    Thursday, 
    Friday, 
    Saturday,
    Sunday,
};

struct DATE
{
    int day;
    std::string month;
    int year;
};

void Print_Data(DATE &ob, int week_day)
{
    switch (week_day)
    {
    case (int)WEEK::Monday:
        std::cout << "Monday ";
        break;
    
    case (int)WEEK::Tuesday:
        std::cout << "Tuesday ";
        break;

    case (int)WEEK::Wednesday:
        std::cout << "Wednesday ";
        break;

    case (int)WEEK::Thursday:
        std::cout << "Thursday ";
        break;

    case (int)WEEK::Friday:
        std::cout << "Friday ";
        break;

    case (int)WEEK::Saturday:
        std::cout << "Saturday ";
        break;

    case (int)WEEK::Sunday:
        std::cout << "Sunday ";
        break;

    default:
        std::cout << "Incorrect input week number" << std::endl;
        break;
    }

    std::cout << ob.day  << " "
              << ob.month << " "
              << ob.year << std::endl;
}

int main () 
{
    DATE date;
    
    int Week_day;
    std::cout << "Enter the day of the week (0-6):";
    std::cin >> Week_day;

    std::cout << "Write a birthday: " << std::endl;
    std::cin >> date.day;

    std::cout << "Write the month of birth: " << std::endl;
    std::cin >> date.month;

    std::cout << "Write the year of birth: " << std::endl;
    std::cin >> date.year;

    Print_Data(date, Week_day);
}

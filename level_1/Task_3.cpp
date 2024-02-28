//Control Structures

#include <iostream>

int main () 
{
    int inp_num{};

    std::cout << "Plase write number" << std::endl;
    std::cin >> inp_num;

    if (inp_num > 0)
    {
        std::cout << "Number is positive" << std::endl;
    }
    else if (inp_num < 0)
    {
        std::cout << "Number is negative" << std::endl;
    }
    else
    {
        std::cout << "Number = 0" << std::endl;
    }
    
    char grade;
    
    switch (inp_num)
    {
        case 90 ... 100:
            grade = 'A';
            break;
        
        case 80 ... 89:
            grade = 'B';
            break;

        case 70 ... 79:
            grade = 'C';
            break;

        case 60 ... 69:
            grade = 'D';
            break;
        
        case 5 ... 59:
            grade = 'F';
            break;

        default:
            break;
    }

    std::cout << "Grade = " << grade << std::endl;

    std::cout << "Print numbers 1...10" << std::endl;
    for (int i = 1; i <= 10; ++i)
    {
        std::cout << i << " ";
    }

    std::cout << std::endl;

    std::cout << "Print numbers 1...10" << std::endl;
    int i = 1;
    while (i <= 10)
    {
        std::cout << i << " ";
        i++;
    }

    std::cout << std::endl;

    return 0;
}












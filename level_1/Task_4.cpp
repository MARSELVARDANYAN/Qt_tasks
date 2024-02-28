//Functions

#include <iostream>

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

int Div(int a, int b)
{
    if (b == 0)
    {
        return -1;
    }
    
    return a / b;
}

int main () 
{
    int num1, num2;
    std::cout << "Write number a" << std::endl;
    std::cin >> num1;
    std::cout << "Write number b" << std::endl;
    std::cin >> num2;

    std::cout << "a + b = " << add(num1, num2) << std::endl;
    std::cout << "a - b = " << sub(num1, num2) << std::endl;
    std::cout << "a * b = " << mul(num1, num2) << std::endl;
    std::cout << "a / b = " << Div(num1, num2) << std::endl;

    return 0;
}   

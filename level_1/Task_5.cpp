//Arrays and Strings

#include <iostream>
#include <string>

int main () 
{
    const size_t size = 10;
    int arr[size];
    
    std::cout << "Plase write " << size << " numbers in array" << std::endl;

    for (int i = 0; i < size; ++i)
    {
       std::cin >> arr[i];
    }
    
    int min = arr[0];
    int max = arr[0];
    size_t sum = 0;

    for (int i = 0; i < size; ++i)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }

        if (arr[i] > max)
        {
            max = arr[i];
        }

        sum += arr[i];
    }

    size_t average = sum / size;

    std::cout << "Minimum element is: " << min << std::endl;
    std::cout << "Maximum element is: " << max << std::endl;
    std::cout << "The average is: " << average << std::endl;


    std::string str;
    std::cout << "Write your string" << std::endl;
    std::getline(std::cin, str, '\n');
    
    int len = 0;
    while(str[len] != '\0')
    {
        len++;
    }

    std::cout << "String lenght = " << len << std::endl;

    std::string str1 = "Hello ";
    std::string str2 = "world!";
    std::string str_res = str1 + str2;
    std::cout << str_res << std::endl;

   return 0;

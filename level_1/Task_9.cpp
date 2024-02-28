//Implementing a Custom Sorting Strategy Selector using Enums, Structs, and Function Pointers

#include <iostream>

enum Sorting_Strategies
{
    BUBBLE_SORT = 1,
    SELECTION_SORT,
};

struct Sorting_Option
{
    Sorting_Strategies strategy;
    void(*fptr)(int*, size_t) = nullptr;
};

void Bubble_Sort(int* arr, size_t size)
{
    for (size_t i = 0; i < size - 1; i++)
    {
        for (size_t j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                std::swap(arr[j], arr[j + 1]);
            }
            
        }
        
    }
    
}

void Selection_Sort(int* arr, size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        int min_index = i;
        for (size_t j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }
        
        if (min_index != i)
        {
            std::swap(arr[min_index], arr[i]);
        }

    }

}

void Scan(int* arr, size_t size)
{
    std::cout << "Write " << size << " elements of array:" << std::endl;
    for (size_t i = 0; i < size; i++)
    {
        std::cin >> arr[i];
    }
    
}

void Print(int* arr, size_t size)
{   
    std::cout << std::endl << "Array numbers    ";
    for (size_t i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl << std::endl;
}

int main ()
{
    const size_t size = 7;
    int arr[size];

    Scan(arr, size);
    Print(arr, size);

    Sorting_Option f_arr[] = 
    {
        {Sorting_Strategies::BUBBLE_SORT, Bubble_Sort}, 
        {Sorting_Strategies::SELECTION_SORT, Selection_Sort}
    };

    int inp_num;
    std::cout << "Select the sorting option" << std::endl << std::endl
              << "1 - Bubble sort" << std::endl
              << "2 - Selection sort" << std::endl;
    std::cin >> inp_num;

    switch (inp_num)
    {
    case 1:
        f_arr[0].fptr(arr, size);
        std::cout << std::endl << "The array is sorted by bubble sort" << std::endl;
        Print(arr, size);
        break;

    case 2:
        f_arr[1].fptr(arr, size);
        std::cout << std::endl << "The array is sorted by selection sort" << std::endl;
        Print(arr, size);
        break;
    
    default:
        std::cout << "Incorect number" << std::endl;
        throw -1;
    }

    return 0;
}

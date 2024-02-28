//Implementing a Sorting Algorithm Selector using Function Pointers

#include <iostream>

void Bubble_Sort(int* arr, size_t size)
{
    for (size_t i = 0; i < size - 1; ++i)
    {
        for (size_t j = 0; j < size - i - 1; ++j) 
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
    for (size_t i = 0; i < size - 1; i++)
    {
        int minIndex = i;
        for (size_t j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        if (minIndex != i)
        {
            std::swap(arr[minIndex], arr[i]);
        }
    }
}

void Print(int* arr, size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    
}

void Scan(int* arr, size_t size)
{
    std::cout << "Write 7 elements of array:" << std::endl;
    for (size_t i = 0; i < size; ++i)
    {
        std::cin >> arr[i];
    }
}

int main ()
{
    const size_t size = 7;
    int arr[size];

    Scan(arr, size);
    
    void(*fptr)(int*, size_t) = nullptr;
    int op = 0;

    std::cout << "Select the sorting option" << std::endl
         << "1 - selection sort" << std::endl
         << "2 - bubble sort" << std::endl;

    std::cin >> op;
    switch (op)
    {
    case 1:
        fptr = Selection_Sort;
        fptr(arr, size);
        std::cout << "The array is sorted by selection sort" << std::endl;
        Print(arr, size);
        break;
    case 2:
        fptr = Bubble_Sort;
        fptr(arr, size);
        std::cout << "The array is sorted by bubble sort" << std::endl;
        Print(arr, size);
        break;
    default:
        std::cout << "Incorrect input" << std::endl;
        break;
    }

    std::cout << std::endl;
    
    return 0;
}












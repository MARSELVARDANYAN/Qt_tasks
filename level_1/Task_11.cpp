//File-Based Sorting Algorithm Selector using Enums, Structs, and Function Pointers

#include <iostream>
#include <fstream>
#include <vector>

enum Sorting_Strategy 
{
    BUBBLE_SORT = 1,
    SELECTION_SORT,
};

struct Sorting_option
{
    Sorting_Strategy option;
    void(*fp_sort)(std::vector<int>&) = nullptr;
};

void Selection_sort(std::vector<int>& v)
{
    for (size_t i = 0; i < v.size() - 1; i++)
    {
        int min_index = i;
        for (size_t j = i + 1; i < v.size(); j++)
        {
            if (v[j] < v[min_index])
            {
                min_index = j;
            }
            
        }

        if (min_index != i)
        {
            std::swap(v[min_index], v[i]);
        }
        
    }
    
}

void Bubble_sort(std::vector<int>& v)
{   
    int n = v.size();
    for (size_t i = 0; i < n - 1; i++)
    {
        for (size_t j = 0; j < n - i - 1; j++)
        {
            if (v[j] > v[j + 1])
            {
                std::swap(v[j], v[j + 1]);
            }
            
        }
        
    }
    
}

        
void read_file(std::string& input_file, std::vector<int>& v)
{
    std::ifstream file(input_file);
    int num;
    if (file.is_open())
    {
        while (file >> num)
        {
            v.push_back(num);
        }

        file.close();
    }
    else{
        std::cerr << "Error " <<  std::endl;
    }
    
}

void save_file(std::string& output_file, const std::vector<int>& v)
{
    std::ofstream file(output_file);
    if (file.is_open())
    {
        for (int num : v)
        {
            file << num << " ";
        }

        file.close();
    }
    else{
        std::cerr << "Error " <<  std::endl;
    }

}

int main ()
{   
    std::vector<int> v;
     
    std::string input_file, output_file;
    int choice;

    std::cout << "Enter the name of the input file: ";
    std::cin >> input_file;

    read_file(input_file, v);

    Sorting_option options[] =
    {
        {BUBBLE_SORT, Bubble_sort},
        {SELECTION_SORT, Selection_sort}
    };

    std::cout << "Select the sorting option:" << std::endl
              << "1 - Bubble Sort" << std::endl
              << "2 - Selection Sort" << std::endl;
    std::cin >> choice;

    switch (choice)
    {
    case 1:
        options[0].fp_sort(v);
        break;
    
    case 2:
        options[1].fp_sort(v);
        break;

    default:
        std::cout << "Incorect number" << std::endl;
        throw -1;
    }

    std::cout << "Enter the name of the output file: ";
    std::cin >> output_file;

    save_file(output_file, v);

    std::cout << "Sorting and saving complete." << std::endl;
}
//File I/O

#include <iostream>
#include <fstream>

int main ()
{   
    int size = 5;
    std::string names[size];

    std::ofstream fout("names.txt");

    std::cout << "write " << size << " names" << std::endl;
    for (size_t i = 0; i < size; i++)
    {
        std::cin >> names[i];
    }

    if (fout.is_open())
    {
        for (size_t i = 0; i < size; i++)
        {
            fout << names[i] << "  ";
        }
        fout.close();
    }
    else{
        std::cerr << "Error opening" << std::endl;
        return 1;
    }
    
    std::ifstream fin("names.txt");
    if (fin.is_open())
    {
        std::string line;
        
        while (std::getline(fin, line))
        {
            std::cout << line;
        }

        std::cout << std::endl;
        fin.close();
    }
    else{
        std::cerr << "Error opening" << std::endl;
        return 1;
    }

    return 0;
}

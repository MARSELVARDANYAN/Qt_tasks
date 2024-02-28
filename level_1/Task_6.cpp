//Pointers and References

#include <iostream>

int main () 
{
    int variable = 13;
    std::cout << "variable = " << variable << std::endl;

    int *p_var = &variable;
    *p_var = 23;
    std::cout << *p_var << std::endl;
    
    int &r_var = variable;
    r_var = 33;
    std::cout << r_var << std::endl;

    return 0;
}


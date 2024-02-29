//Object-Oriented Programming (OOP)

#include <iostream>

class BOOK
{
private:
    std::string title;
    std::string autor;
    std::string ISBN;

public:
    void set_title(const std::string& B_title){
        title = B_title;
    }

    std::string get_title(){
        return title;
    }

    void set_autor(const std::string& B_autor)
    {
        autor = B_autor;
    }

    std::string get_autor()
    {
        return autor;
    }
    
    void set_ISBN(const std::string& B_ISBN){
        ISBN = B_ISBN;
    }

    std::string get_ISBN()
    {
        return ISBN;
    }
};

int main ()
{
    BOOK book;
    std::string Tmp_str;

    std::cout << "Write to book title" << std::endl;
    std::cin >> Tmp_str;
    book.set_title(Tmp_str);

    std::cout << "Write to book autor" << std::endl;
    std::cin >> Tmp_str;
    book.set_autor(Tmp_str);

    std::cout << "Write to book ISBN" << std::endl;
    std::cin >> Tmp_str;
    book.set_ISBN(Tmp_str);

    std::cout << std::endl;
    std::cout << "Title: " << book.get_title() << std::endl;
    std::cout << "Autor: " << book.get_autor() << std::endl;
    std::cout << "ISBN: " << book.get_ISBN() << std::endl;

    return 0;
}
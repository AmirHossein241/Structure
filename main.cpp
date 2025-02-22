#include <iostream>
#include <string.h>
using namespace std;

struct Book
{
    string name_book;
    string Author;
    bool Scientific;
    float price;
    int page_number;
    int year;
};


int main()
{
    Book book;

    book.name_book="physics";
    book.Author = "David Halliday";
    book.Scientific = true;
    book.price = 500.37;
    book.page_number = 877;
    book.year = 2010;

    return 0;
}

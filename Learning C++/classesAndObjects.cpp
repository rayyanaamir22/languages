#include <iostream>
#include <string>

class Book { // Define a class
    public:
        std::string title;
        std::string author;
        int numPages;
};

int main() {
    // Create an object
    Book myBook;
    myBook.title = "Harry Potter";
    myBook.author = "JK Rowling";
    myBook.numPages = 600;

    return 0;
}
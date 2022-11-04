#include <iostream>
#include <string>

class Book { // Define a class
    public: // Access specifier
        // Attributes
        std::string title;
        std::string author;
        int numPages;
        int currentPage = 0;
        int bookMark = NULL;

        // Methods
        bool bookFinished(int currentPage) {
            if(currentPage>=numPages) {
                return true;
            } 
            return false;
        }

        void read(int pageCount){
            if (!bookFinished(currentPage)) {
                currentPage += pageCount;
            } else {
                std::cout << "The book is already finished";
            }
        }
        void putBookmark(int page); // Define outside class

};

void Book::putBookmark(int page){ // Define outside class
    bookMark = page;
}

int main() {
    // Create an object
    Book myBook;
    myBook.title = "Harry Potter";
    myBook.author = "JK Rowling";
    myBook.numPages = 600;

    int pagesRead = 0;
    std::cout << "How many pages to read: ";
    std::cin >> pagesRead;
    myBook.read(pagesRead);

    std::cout << "\nCurrent page: " << myBook.currentPage;

    return 0;
}
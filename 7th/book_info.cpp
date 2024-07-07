#include <iostream>
#include <string>

int main() {
    // Declare and initialize book title and author strings
    std::string bookTitle = "1984";
    std::string author = "George Orwell";

    // Combine book title and author
    std::string bookInfo = bookTitle + " by " + author;

    // Print the result
    std::cout << "Book: " << bookInfo << std::endl;

    return 0;
}

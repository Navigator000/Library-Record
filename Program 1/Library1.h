#ifndef Library1
#define Library1
#include <string>

struct BookDetails {
	std::string Book;
	std::string Author;
	int Year;
};

void lendBook(std::string bookTitle, std::string borrowerName);
void returnBook(std::string bookTitle, std::string borrowerName, std::string returnDate);
int getAvailableCopies(std::string bookTitle);

#endif

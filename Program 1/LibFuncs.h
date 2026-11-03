#ifndef LibFuncs
#define LibFuncs
#include <string>

struct BookDetails {
	std::string Book;
	std::string Author;
	int Year;
	int Count;
};

void lendBook(std::string bookTitle, std::string borrowerName);
void returnBook(std::string bookTitle, std::string borrowerName, std::string returnDate);
int getAvailableCopies(std::string bookTitle);
void showSpinner(int duration);

#endif

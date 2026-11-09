#ifndef LibFuncs
#define LibFuncs
#include <string>
#include <vector>

struct BookDetails {
	std::string Book;
	std::string Author;
	int Year;
	int Count;
};

void lendBook(std::vector<BookDetails>& libraryRecords, std::string bookTitle, std::string borrowerName);
void returnBook(std::vector<BookDetails>& libraryRecords, std::string bookTitle, std::string borrowerName, std::string returnDate);
int getAvailableCopies(const std::vector<BookDetails>& libraryRecords, std::string bookTitle);
void showSpinner(int duration);

#endif

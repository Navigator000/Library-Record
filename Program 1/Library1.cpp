#include <iostream>
#include "Library1.h"


void lendBook(std::string bookTitle, std::string borrowerName) {
	std::cout << "Lending book: " << bookTitle << " to " << borrowerName << std::endl;
	// todo: update lib recs here
	return;
}

void returnBook(std::string bookTitle, std::string borrowerName, std::string returnDate) {
	std::cout << "Returning book: " << bookTitle << " from " << borrowerName << " on " << returnDate << std::endl;
	//todo: update lib recs here
	return;
}

int getAvailableCopies(std::string bookTitle) {
	std::cout << "Getting available copies for: " << bookTitle << std::endl;
	// todo: implement logic to retrieve available copies
	return 5;
}

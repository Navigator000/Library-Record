#include <iostream>
#include "LibFuncs.h"
#include <thread>
#include <chrono>

void hideCursor() {
	std::cout << "\033[?25l";
}

void showCursor() {
	std::cout << "\033[?25h";
}

void showSpinner(int duration) {
	hideCursor();
	const char spinnerChars[] = { '|', '/', '-', '\\' };
	int spinnerIndex = 0;
	for (int i = 0; i < duration * 10; ++i) {
		std::cout << "\r" << spinnerChars[spinnerIndex] << std::flush;
		spinnerIndex = (spinnerIndex + 1) % 4;
		std::this_thread::sleep_for(std::chrono::milliseconds(100));
	}
	showCursor();
	std::cout << "\r " << std::flush; //spinner ends with a space to clear the last spinner character
}

int getAvailableCopies(const std::vector<BookDetails>& libraryRecords, std::string bookTitle) {
	for (const auto& book : libraryRecords) {
		if (book.Book == bookTitle) {
			return book.Count;
		}
	}
	return 0;
}

void lendBook(std::vector<BookDetails>& libraryRecords, std::string bookTitle, std::string borrowerName) {
	std::cout << "Lending book: " << bookTitle << " to " << borrowerName << std::endl;

	// use vec check capac
	int BookCapacity = getAvailableCopies(libraryRecords, bookTitle);
	if (BookCapacity <= 0) {
		std::cout << "No copies available" << std::endl;
		return;
	}

	showSpinner(2);

	// find the book in the vector and decrement
	for (auto& book : libraryRecords) {
		if (book.Book == bookTitle) {
			book.Count -= 1;
			break;
		}
	}
	std::cout << "Book Lent" << std::endl;
}



#include <iostream>
#include "Library1.h"
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

void lendBook(std::string bookTitle, std::string borrowerName) {
	std::cout << "Lending book: " << bookTitle << " to " << borrowerName << std::endl;
	showSpinner(2);
	int BookCapacity = getAvailableCopies(bookTitle);
	BookCapacity -= 1;
	std::cout << "Book Lent" << std::endl; 
	return;
}

void returnBook(std::string bookTitle, std::string borrowerName, std::string returnDate) {
	std::cout << "Returning book: " << bookTitle << " from " << borrowerName << " on " << returnDate << std::endl;
	//todo: update lib recs here
	return;
}

int getAvailableCopies(std::string bookTitle) {
	int count{};
	return 5;
}



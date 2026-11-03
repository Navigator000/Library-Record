#include <iostream>
#include "Library1.h"
#include <vector>
#include <thread>
#include <chrono>

int main() {
	std::vector<BookDetails> libraryRecords;
	libraryRecords.reserve(100); // reserve for 100 books

	std::vector<std::string> titles = {"Gatsby", "Mockingbird", "1984"};
	std::vector<std::string> authors = {"Fitzgerald", "Lee", "Orwell"};
	std::vector<int> years = {1925, 1960, 1949};
	std::vector<int> counts = {3, 2, 5};

	for (int i = 0; i < titles.size(); ++i) {
		BookDetails book;
		book.Book = titles[i];
		book.Author = authors[i];
		book.Year = years[i];
		book.Count = counts[i];
		libraryRecords.push_back(book);
	}

	while (true) {
		std::cout << "Lending Active" << std::endl;
		std::cout<<"1. Gatsby"<<"\n"
			<< "2. Mockingbird" << "\n"
			<< "3. 1984" << "\n";
		std::cout << "Enter the book number to lend (or 0 to exit): ";
		int choice;
		std::cin >> choice;
		if (choice == 0) {
			break;
		}

		else if (choice < 1 || choice > titles.size()) {
			std::cout << "Invalid choice. Please try again." << std::endl;
			continue;
		}

		else if (choice >= 1 && choice <= titles.size()) {
			std::string borrowerName;
			std::cout << "Enter borrower's name: ";
			std::getline(std::cin, borrowerName);
			lendBook(titles[choice - 1], borrowerName);
		}
	}
}
#include <iostream>
#include "Library1.h"
#include <vector>

int main() {
	std::vector<BookDetails> libraryRecords;
	libraryRecords.reserve(100); // reserve for 100 books

	std::vector<std::string> titles = {"Gatsby", "Mockingbird", "1984"};
	std::vector<std::string> authors = {"Fitzgerald", "Lee", "Orwell"};
	std::vector<int> years = {1925, 1960, 1949};

	for (int i = 0; i < titles.size(); ++i) {
		BookDetails book;
		book.Book = titles[i];
		book.Author = authors[i];
		book.Year = years[i];
		libraryRecords.push_back(book);
	}
}
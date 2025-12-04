#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

struct Book {
    string title;
    int year;
};

multimap<string, Book> library;

void addBook() {
    string author, title;
    int year;

    cout << "Author (Last Name and initials): ";
    getline(cin, author);
    cout << "Book title: ";
    getline(cin, title);
    cout << "Year of publication: ";
    cin >> year;
    cin.ignore();

    library.insert({ author, {title, year} });

    cout << "Book added!\n";
}

void removeBook() {
    string author, title;
    cout << "Enter the author of the book to remove: ";
    getline(cin, author);
    cout << "Enter the book title: ";
    getline(cin, title);

    auto range = library.equal_range(author);
    bool found = false;

    for (auto it = range.first; it != range.second; ++it) {
        if (it->second.title == title) {
            library.erase(it);
            cout << "Book removed!\n";
            found = true;
            break;
        }
    }
    if (!found) cout << "Book not found!\n";
}

void searchByAuthor() {
    string author;
    cout << "Enter the author: ";
    getline(cin, author);

    auto range = library.equal_range(author);
    if (range.first == range.second) {
        cout << "No books found by this author.\n";
        return;
    }

    cout << "Books by " << author << ":\n";
    for (auto it = range.first; it != range.second; ++it) {
        cout << "  - " << it->second.title << " (" << it->second.year << ")\n";
    }
}

void searchByYear() {
    int year;
    cout << "Enter the year of publication: ";
    cin >> year;
    cin.ignore();

    bool found = false;
    for (auto& entry : library) {
        if (entry.second.year == year) {
            if (!found) cout << "Books published in " << year << ":\n";
            cout << "  - " << entry.first << ": "
                << entry.second.title << "\n";
            found = true;
        }
    }
    if (!found) cout << "No books found from this year.\n";
}

void showAll() {
    if (library.empty()) {
        cout << "Library is empty.\n";
        return;
    }

    cout << "All books in the library:\n";
    for (auto& entry : library) {
        cout << entry.first << ": " << entry.second.title
            << " (" << entry.second.year << ")\n";
    }
}

int main() {
    int choice;

    while (true) {
        cout << "\n--- MENU ---\n";
        cout << "1. Add a book\n";
        cout << "2. Remove a book\n";
        cout << "3. Search by author\n";
        cout << "4. Search by year\n";
        cout << "5. Show all books\n";
        cout << "0. Exit\n";
        cout << "Your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
        case 1: addBook(); break;
        case 2: removeBook(); break;
        case 3: searchByAuthor(); break;
        case 4: searchByYear(); break;
        case 5: showAll(); break;
        case 0: return 0;
        default: cout << "Invalid choice!\n";
        }
    }
}
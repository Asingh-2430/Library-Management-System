// Function to search for a book by Title
void searchBookByTitle() {
    string title;
    cout << "Enter Book Title to search: ";
    cin.ignore();  // To ignore any leftover newline characters
    getline(cin, title);
    for (const auto& book : books) {
        if (book.title == title) {
            cout << "ID: " << book.id << ", Title: " << book.title << ", Author: " << book.author << ", Status: "
                 << (book.isIssued ? "Issued to " + book.issuedTo : "Available") << endl;
            return;
        }
    }
    cout << "Book not found." << endl;
}

// Function to issue a book to a student
void issueBook() {
    int id;
    string studentName;
    cout << "Enter Book ID to issue: ";
    cin >> id;
    for (auto& book : books) {
        if (book.id == id && !book.isIssued) {
            cout << "Enter student name: ";
            cin.ignore();  // To ignore any leftover newline characters
            getline(cin, studentName);
            book.isIssued = true;  // Mark the book as issued
            book.issuedTo = studentName;  // Store the student's name
            cout << "Book issued to " << studentName << endl;
            return;
        }
    }
    cout << "Book not available for issuing." << endl;
}

// Function to return a book
void returnBook() {
    int id;
    cout << "Enter Book ID to return: ";
    cin >> id;
    for (auto& book : books) {
        if (book.id == id && book.isIssued) {
            book.isIssued = false;  // Mark the book as returned
            book.issuedTo = "";     // Clear the student's name
            returnQueue.push(id);   // Add the book to the return queue
            cout << "Book returned successfully!" << endl;
            return;
        }
    }
    cout << "Book not found or not issued." << endl;
}

// Function to list all books in the library
void listAllBooks() {
    for (const auto& book : books) {
        cout << "ID: " << book.id << ", Title: " << book.title
             << ", Author: " << book.author << ", Status: ";
        
        if (book.isIssued) {
            cout << "Issued to " << book.issuedTo << endl;
        } else {
            cout << "Available" << endl;
        }
    }
}

// Function to delete a book from the library
void deleteBook() {
    int id;
    cout << "Enter Book ID to delete: ";
    cin >> id;
    for (size_t i = 0; i < books.size(); ++i) {
        if (books[i].id == id) {
            books.erase(books.begin() + i);  // Remove the book from vector
            cout << "Book deleted successfully!" << endl;
            return;
        }
    }
    cout << "Book not found." << endl;
}

// Main function to run the Library Management System
int main() {
    int choice;
    do {
        // Displaying the menu
        cout << "Welcome to the Library Management System!" << endl;
        cout << "1. Add Book" << endl;
        cout << "2. Search Book by ID" << endl;
        cout << "3. Search Book by Title" << endl;
        cout << "4. Issue Book" << endl;
        cout << "5. Return Book" << endl;
        cout << "6. List All Books" << endl;
        cout << "7. Delete Book" << endl;
        cout << "8. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        // Handling user input for different functionalities
        switch (choice) {
        case 1:
            addBook();  // Call the function to add a book
            break;
        case 2:
            searchBookByID();  // Call the function to search by ID
            break;
        case 3:
            searchBookByTitle();  // Call the function to search by Title
            break;
        case 4:
            issueBook();  // Call the function to issue a book
            break;
        case 5:
            returnBook();  // Call the function to return a book
            break;
        case 6:
            listAllBooks();  // Call the function to list all books
            break;
        case 7:
            deleteBook();  // Call the function to delete a book
            break;
        case 8:
            cout << "Goodbye!" << endl;  // Exit the program
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;  // Invalid input handling
        }
        cout << endl;
    } while (choice != 8);  // Loop until the user selects the Exit option
    return 0;
}

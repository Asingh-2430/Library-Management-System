# Library-Management-System
### Description of My Library Management System:

This is a **Library Management System** 📚 that I developed using C++. It allows efficient management of books in a library and provides key functionalities for both library administrators and users. The system is designed to be intuitive, with a simple text-based interface for easy interaction.

### Key Features:

1. **Add Book** ➕: I implemented a feature to add new books to the library by specifying their unique ID, title, and author. Once added, the book is stored in a vector and its initial status is marked as "Available."

2. **Search Book by ID** 🔍: This function enables users to search for a book by its unique ID. I designed it to display the book’s details, such as the title, author, and its availability status (whether it’s issued or still available).

3. **Search Book by Title** 📖: To allow for more flexible searching, I implemented a function where users can search for a book by its title. This feature checks for exact matches and provides the status of the book.

4. **Issue Book** 🎓: I created a mechanism to issue a book to a student by checking its availability. Once a book is issued, I store the student's name and update the status of the book to "Issued."

5. **Return Book** 🔄: This feature allows users to return a book to the library by entering its ID. If the book is marked as issued, its status is updated to "Available" and the book is added to a return queue for tracking purposes.

6. **List All Books** 📚✨: I included a function that displays all books in the library, including their ID, title, author, and status (whether the book is available or issued). This provides a comprehensive view of the library’s collection.

7. **Delete Book** ❌: This feature enables users to delete a book from the library by its ID. If the book is found, it is removed from the system, freeing up space for new books.

8. **Exit** 🏁: Users can exit the system at any time by choosing the exit option from the menu.

### Data Structures:

- **Vector** 🧑‍💻: I used a vector to store the books in the library because it allows for dynamic resizing and efficient access to the books based on their position in the list.
- **Queue** ⏳: A queue is used to manage returned books. It helps keep track of the order in which books are returned, enabling potential future extensions like prioritizing the returned books for maintenance or re-shelving.

### Design Considerations:

- **User Interaction** 💬: The system is designed with simplicity in mind. The user interacts with the system through a command-line interface (CLI), where they can select options from a menu using numeric input.
- **Status Management** 📌: Each book has an `isIssued` flag that I used to track its status, making it clear whether it is available or issued. If a book is issued, I also track the name of the student to whom it is issued.


---
This system serves as a solid foundation for managing a small library 🏫 and could be further enhanced with features such as overdue book tracking ⏰, generating reports 📊, or even a graphical user interface (GUI) for easier use.

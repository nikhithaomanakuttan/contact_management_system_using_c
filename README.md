# Contact Management System

This is a simple **Contact Management System** implemented in **C** that allows users to store, manage, and view contact information. The system lets users add new contacts, view all stored contacts, and exit the program. The contacts are stored in memory during the runtime of the program.

## Features

- **Add a New Contact**: Users can add a new contact with the following details:
  - Name
  - Phone number
  - Email address
- **View All Contacts**: Users can view the list of all stored contacts.
- **Exit**: Users can exit the system.

## Prerequisites

- A C compiler (e.g., GCC)
- Basic understanding of how to compile and run C programs

## How to Use

### Step 1: Compile the Program

To compile the program, open a terminal or command prompt, navigate to the directory where the source code files (`main.c`) are located, and use the following command:


gcc main.c -o contact_management


This will compile the program and generate an executable named `contact_management`.

### Step 2: Run the Program

Once compiled, you can run the program with the following command:

./contact_management


### Step 3: Main Menu

When you run the program, the main menu will appear, offering three options:

1. **Add Contact**: Allows the user to input a new contact's details (name, phone, email).
2. **View Contacts**: Displays a list of all contacts entered so far.
3. **Exit**: Exits the program.

### Example Menu Interaction:

Contact Management System
1. Add Contact
2. View Contacts
3. Exit
Enter your choice: 1
Enter name: John Doe
Enter phone: 123-456-7890
Enter email: johndoe@example.com
Contact added successfully.

Contact Management System
1. Add Contact
2. View Contacts
3. Exit
Enter your choice: 2
Contacts list:
Contact 1:
Name: John Doe
Phone: 123-456-7890
Email: johndoe@example.com

Contact Management System
1. Add Contact
2. View Contacts
3. Exit
Enter your choice: 3
Exiting the Contact Management System.


### Data Storage

- The program stores the contacts in an array during runtime.
- The contacts will be lost when the program exits, as there is no persistent file storage (for now). You can modify the program to store contacts in a text file if persistent storage is needed.

## File Structure

contact_management/
├── contact.c                # Main program logic for adding and viewing contacts
└── README.md             # Project description and instructions


## Conclusion

This **Contact Management System** in C is a basic, user-friendly application that demonstrates fundamental concepts such as structuring data with structs, handling user input, and creating a simple menu-driven program. It can be easily expanded to include features such as updating, deleting, or searching for contacts, and saving contacts to a file for persistence.

---

Feel free to enhance and extend the system to fit your needs!

--- 

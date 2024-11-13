# contact_management_system_using_c
Description:

The Contact Management System is a C-based application that allows users to store, manage, and search for contact information. This system enables the user to add, delete, update, and view contact details such as name, phone number, and email address. The application uses a simple text file to store data and ensures that the user's contact information is saved persistently across sessions.

Features:

Add New Contact: The user can add a new contact to the system.

View All Contacts: The user can view a list of all stored contacts.

Update Contact: The user can update an existing contact's details.

Delete Contact: The user can delete a contact from the system.

Search Contact: The user can search contacts by name or phone number.


Prerequisites:

C compiler (e.g., GCC)

A basic understanding of how to run a C program


How to Use the System:

Step 1: Compile the Program

To compile the program, open the terminal (or command prompt) and navigate to the directory where the source code file (contact_management.c) is located. Then, use the following command:

gcc contact_management.c -o contact_management

This will compile the source code and generate an executable named contact_management (or contact_management.exe on Windows).

Step 2: Run the Program

After compiling, run the program using the following command:

./contact_management

This will start the Contact Management System in your terminal.

Step 3: Main Menu

Once the program starts, the user will be presented with a main menu that offers the following options:

1. Add a New Contact


2. View All Contacts


3. Update a Contact


4. Delete a Contact


5. Search a Contact


6. Exit



Step 4: User Interactions

Option 1: Add a New Contact

To add a new contact, select option 1 from the main menu. The program will prompt you to enter the following details:

Name

Phone Number

Email Address


The system will save this information in a file, and you will be notified once the contact is added successfully.

Option 2: View All Contacts

To view all stored contacts, select option 2. The system will display a list of all contacts in the format:

Name: John Doe
Phone: 123-456-7890
Email: johndoe@example.com

Option 3: Update a Contact

To update an existing contact, select option 3. The system will prompt you to enter the name or phone number of the contact you wish to update. Once found, you can modify the contact's details.

Option 4: Delete a Contact

To delete a contact, select option 4. The system will ask for the name or phone number of the contact you want to delete. After confirming, the contact will be removed from the system.

Option 5: Search a Contact

To search for a contact, select option 5. You will be asked to provide the name or phone number of the contact. If the contact exists, its details will be displayed.

Option 6: Exit

To exit the system, select option 6. The program will close.

Data Storage:

The system stores contacts in a text file (e.g., contacts.txt) to persist data between runs. Each contact is stored in the following format:

Name: John Doe
Phone: 123-456-7890
Email: johndoe@example.com

This data is saved when a contact is added, updated, or deleted.

Sample Output:

Welcome to the Contact Management System!

Please choose an option:
1. Add a New Contact
2. View All Contacts
3. Update a Contact
4. Delete a Contact
5. Search a Contact
6. Exit

Code Structure:

main.c: The main file that contains the logic for the Contact Management System.

contact_operations.c: Contains the functions for adding, updating, deleting, and viewing contacts.

contact_operations.h: Header file for declaring function prototypes.


Conclusion:

This Contact Management System in C is a simple but effective tool for managing personal contacts. The system is designed to be easily extensible, allowing additional features to be added in the future. Whether you're a beginner learning C or someone looking for a basic contact management solution, this project offers both functionality and simplicity.
